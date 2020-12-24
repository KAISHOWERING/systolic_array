#include "tcpclient.h"
#include<QQuickItem>
#include<QQuickItemGrabResult>
#include <cmath>
#include<QEventLoop>
#ifdef USING_SERIALPORT
#include<QSerialPort>
#else
#include<QTcpSocket>
#endif
static const QString addr = "192.168.91.140";
static const quint16 port = 7500;

TcpClient::TcpClient(QObject *parent) : QObject(parent),m_canvas(nullptr),m_display_text(nullptr),chart_view(nullptr),m_connected(false)
{

#ifdef USING_SERIALPORT
    m_socket = new QSerialPort("COM6");
    m_socket->setBaudRate(115200);
    m_socket->open(QIODevice::ReadWrite);
#else

    m_socket = new QTcpSocket(this);
    connect(m_socket,&QTcpSocket::connected,[&](){
        this->m_connected = true;
    });
    connect(m_socket,&QTcpSocket::disconnected,[&](){
        this->m_connected = false;
    });

    m_socket->connectToHost(addr,port,QTcpSocket::ReadWrite);
#endif
    connect(m_socket, &QIODevice::readyRead, this, &TcpClient::onReply);
}

void TcpClient::registerQML(QObject *root)
{
    this->connect(root,SIGNAL(submitClick()),this,SLOT(onSubmitClicked()));
    m_canvas = root->findChild<QQuickItem *>("canvas");
    m_display_text = root->findChild<QQuickItem *>("result");
    chart_view = root->findChild<QObject *>("chart_view");
}

void TcpClient::onSubmitClicked()
{
#ifndef USING_SERIALPORT
    if(!m_connected){
        qDebug() << "No connection established!";
        return;
    };
#endif
    auto pic_p = m_canvas->grabToImage();
    QEventLoop loop;
    connect(pic_p.data(),&QQuickItemGrabResult::ready,[&](){
        loop.exit();
    });
    loop.exec();
    auto pic = pic_p->image().scaled(28,28,Qt::AspectRatioMode::KeepAspectRatio,Qt::TransformationMode::SmoothTransformation);
    char buffer[784] = {0};
    int tx = 0;
    for(int i = 0 ; i < 28; ++i){
        for(int j = 0; j < 28; ++j){
            buffer[i*28+j] = (pic.pixel(j,i) >> 24) & 0xFF;
            //pic.setPixel(j,i,(buffer[i*28+j] | buffer[i*28+j] << 8 | buffer[i*28+j] << 16 | 0xFF000000));
        }
    }
    //pic.save("a.png");
    tx = m_socket->write(buffer,784);
    m_socket->flush();
}

void TcpClient::onReply()
{
#ifndef USING_SERIALPORT
    if(!m_connected){
        qDebug() << "No connection established!";
        return;
    };
#endif
    char buffer[12];
    m_socket->read(buffer,12);

    int c = buffer[0];
    QMetaObject::invokeMethod(m_display_text,"setValue",Q_ARG(QVariant ,QVariant(c)));
    QStringList possi;
    QList<float> ix;
    float sum = 0;
    for(int i = 0; i < 10; ++i){
        float tmp = std::exp(buffer[i+1]/32.0);
        sum += tmp;
        ix.append(tmp);
    }
    for(auto &p : ix){
        possi.append(QString::number(p/sum));
    }
    QMetaObject::invokeMethod(chart_view,"updateData",Q_ARG(QVariant, QVariant::fromValue(possi.join("+"))));
    /*
    m_bar_set->remove(0,m_bar_set->count());
    for(int i = 0; i < 10; ++i)
        m_bar_set->append(all[i+1] / 32.0);
        */
}

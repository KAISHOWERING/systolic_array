#ifndef TCPCLIENT_H
#define TCPCLIENT_H
#define USING_SERIALPORT
#include <QObject>


class QTcpSocket;
class QQuickItem;
class QSerialPort;


class TcpClient final : public QObject{
    Q_OBJECT
public:
    TcpClient(QObject *parent = nullptr);
    void registerQML(QObject *root);
public slots:
    void onSubmitClicked();
    void onReply();
private:
#ifdef USING_SERIALPORT
    QSerialPort *m_socket;
#else
    QTcpSocket *m_socket;
#endif
    QQuickItem *m_canvas;
    QQuickItem *m_display_text;
    QObject *chart_view;
    bool m_connected;
};

#endif // TCPCLIENT_H

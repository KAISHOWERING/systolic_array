import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import QtCharts 2.3


Window {
    visible: true
    width: 1200
    height: 480
    title: qsTr("Lenet5 Frontend")
    signal submitClick();
    Canvas{
        id: canvas
        objectName: "canvas"
        anchors.left: parent.left
        width: Math.min(parent.width, parent.height)
        height: this.width
        property real fromX;
        property real fromY;
        property real toX;
        property real toY;
        property bool need_clear : false;
        MouseArea{
            id: area;
            anchors.fill: parent
            onPositionChanged: {
                if(mouse.buttons & Qt.LeftButton && !(mouse.buttons & Qt.RightButton) && !(mouse.buttons & Qt.MiddleButton)){
                    canvas.toX = mouseX;
                    canvas.toY = mouseY;
                    canvas.requestPaint();
                }
            }
            onPressed: {
                canvas.fromX = mouseX;
                canvas.fromY = mouseY;
                mouse.accepted = true;
            }
        }
        onPaint: {
            var ctx = canvas.getContext("2d");
            if(need_clear){
                ctx.clearRect(0,0,width,height)
                need_clear = false;
                return
            }

            ctx.lineWidth = 60;
            ctx.strokeStyle=Qt.rgba(0, 0, 0, 1);
            ctx.beginPath();
            ctx.lineJoin = "round"
            ctx.lineCap = "round"
            ctx.moveTo(fromX,fromY);
            ctx.lineTo(toX,toY);
            ctx.stroke();
            canvas.fromX = area.mouseX;
            canvas.fromY = area.mouseY;
        }
    }
    Frame{
        anchors.left: canvas.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.right: chart_view.left
        Column{
            id: column
            anchors.centerIn: parent
            spacing: 30
            Button{
                id: clear
                text: qsTr("Clear")
                anchors.horizontalCenter: parent.horizontalCenter
                onClicked: {
                    canvas.need_clear = true;
                    canvas.requestPaint();
                }
            }

            Button {
                id: submit
                text: qsTr("Submit")
                anchors.horizontalCenter: parent.horizontalCenter
                onClicked: {
                    submitClick();
                }
            }
            Text{
                id:result
                objectName: "result"
                text: "currentResult"
                font.family: "Microsoft Yahei UI"
                font.pointSize: 10;
                anchors.horizontalCenter: parent.horizontalCenter
                function setValue(val){
                    text = "currentResult:" + val;
                }
            }

        }
    }
    ChartView{
        id: chart_view
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.top: parent.top
        width: Math.min(parent.width, parent.height)
        height: this.width
        title: "Result Analysis"
        antialiasing: true
        objectName: "chart_view"
        BarSeries{
            axisX: BarCategoryAxis {
                categories: ["0","1","2","3","4","5","6","7","8","9"]
            }
            axisY: ValueAxis {
                id : axisYInfo
                min : 0;
                max : 10;
            }

            BarSet {
                id: possibility_data;
                label: "Possibility"
                objectName: "possibility_data"
                values: [];
            }
        }
        function updateData(data){
            possibility_data.remove(0,possibility_data.count);
            var datas = data.split("+")
            //console.log(datas);
            var max = 0;
            for(var i = 0; i < 10; ++i){
                var tru_data = parseFloat(datas[i])
                if(max < tru_data) max = tru_data;
                possibility_data.append(tru_data);
            }
            axisYInfo.max = max * 1.2;
        }
    }
}


import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle{
        anchors.centerIn: parent
        width: 100
        height: 100
        color: "green"

    }
}

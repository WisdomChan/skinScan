#include <QApplication>
#include <sources/mainpart/mainwidget.h>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QCoreApplication::setOrganizationName("Shey Ray");
    QCoreApplication::setApplicationName("SkinScan");
    MainWidget w;
    w.show();

    return a.exec();
}

#include "Tutorial.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Tutorial window;
    window.show();
    return app.exec();
}

#include <QApplication>
#include "adderdialog.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    AdderDialog dialog;
    dialog.show();
    return app.exec();
}


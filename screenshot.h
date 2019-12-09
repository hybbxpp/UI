//
// Created by twak on 14/10/2019.
// DO NOT EDIT THIS FILE
//

#ifndef SCREENSHOT_H
#define SCREENSHOT_H

#include <QWidget>
#include "responsive_layout.h"
#include "responsive_label.h"
#include "responsive_window.h"

// assessment class. do not edit.
class Screenshot : public ResponsiveWindow {
    Q_OBJECT

public slots:
    void doScreenshot();

private:
    void showEvent(QShowEvent *);
    void schedule();
    vector<QSize> remaining;
    QTimer* mTimer;
};


#endif //SCREENSHOT_H


#include "responsive_layout.h"
#include "responsive_label.h"
#include <iostream>

using namespace std;

void ResponsiveLayout::setGeometry(const QRect &r ) {

    QLayout::setGeometry(r);

    for (int i = 0; i < list_.size(); i++) {

        QLayoutItem *o = list_.at(i);

        try {
            ResponsiveLabel *label = static_cast<ResponsiveLabel *>(o->widget());
			 
			if (label->text() == kBackButton) //back button
				label->setGeometry(0.01 * r.width() + r.x(), 72 + r.y(), 90, 50);
			else if (label->text() == kNavTabs) // headers go at the top
				label->setGeometry(0.01 * r.width() + r.x(), 10 + r.y(), 0.98 * r.width(), 60);
			else if (label->text() == kSearchButton)//seacherButton
				label->setGeometry(0.99 * r.width() - 90 + r.x(), 72 + r.y(), 90, 50);
			else if (label->text() == kSearchOptions && r.width() > 380)//seacher option1
				label->setGeometry(0.01 * r.width() + 91 + r.x(), 72 + r.y(), 125, 50);
			else if (label->text() == kSearchOptions && r.width() <= 380)//seacher option2
				label->setGeometry(0.01 * r.width() + 91 + r.x(), 72 + r.y(), 0.98 * r.width() - 247, 50);
			else if (label->text() == kSearchText && r.width() > 380)//searchText1
				label->setGeometry(0.01 * r.width() + 217 + r.x(), 72 + r.y(), 0.98 * r.width() - 308, 50);
			else if (label->text() == kSearchText && r.width() <= 380)//searchText2
				label->setGeometry(0.98 * r.width() - 151 + r.x(), 72 + r.y(), 63, 50);
			else if (label->text() == kAdvert)//adv
				label->setGeometry(0.01 * r.width(), 124 + r.y(), 0.98 * r.width(), 40);
			else if (label->text() == kShoppingBasket)//basket
				label->setGeometry(0.99 * r.width() - 90 + r.x(), 166 + r.y(), 90, 80);
			else if (label->text() == kHomeLink)//home
				label->setGeometry(0.01 * r.width() + r.x(), 166 + r.y(), 90, 60);
			else if (label->text() == kSearchResult && r.height() > 545)//result1
				label->setGeometry(0.01 * r.width() + 91 + r.x(), 166 + r.y(), 0.98 * r.width() - 182, 350);
			else if (label->text() == kSearchResult && r.height() <= 545)//result2
				label->setGeometry(0.01 * r.width() + 91 + r.x(), 166 + r.y(), 0.98 * r.width() - 182, r.height() - 194);
			else if (label->text() == kAdvert1 && r.height() > 475)//adv11
				label->setGeometry(0.01 * r.width(), 266 + r.y(), 90, 200);
			else if (label->text() == kAdvert1 && r.height() <= 475 && r.height() > 370)//adv12
				label->setGeometry(0.01 * r.width(), 266 + r.y(), 90, r.height() - 275);
			else if (label->text() == kAdvert1 && r.height() <= 370)//adv13
				label->setGeometry(0.01 * r.width(), 266 + r.y(), 0, 0);
			else if (label->text() == kAdvert2 && r.height() > 495)//adv21
				label->setGeometry(0.99 * r.width() - 90 + r.x(), 286 + r.y(), 90, 200);
			else if (label->text() == kAdvert2 && r.height() <= 495 && r.height() > 390)//adv22
				label->setGeometry(0.99 * r.width() - 90 + r.x(), 286 + r.y(), 90, r.height() - 295);
			else if (label->text() == kAdvert2 && r.height() <= 390)//adv23
				label->setGeometry(0.99 * r.width() - 90 + r.x(), 286 + r.y(), 0, 0);
			else if (label->text() == kSearchBackward && r.height() > 545)//Backward1
				label->setGeometry(0.3 * r.width() + 20 + r.x(), 516 + r.y(), 30, 20);
			else if (label->text() == kSearchBackward && r.height() <= 545)//Backward2
				label->setGeometry(0.3 * r.width() + 20 + r.x(), r.height() - 29 + r.y(), 30, 20);
			else if (label->text() == kSearchForward && r.height() > 545)//Forward1
				label->setGeometry(0.65 * r.width() - 30 + r.x(), 516 + r.y(), 30, 20);
			else if (label->text() == kSearchForward && r.height() <= 545)//Forward2
				label->setGeometry(0.65 * r.width() - 30 + r.x(), r.height() - 29 + r.y(), 30, 20);
			else if (label->text() == kInterest && r.height() > 650)//interest on
				label->setGeometry(0.14 * r.width(), 550 + r.y(), 0.72 * r.width(), 100);
			else if (label->text() == kInterest && r.height() <= 650)//interest off
				label->setGeometry(0.14 * r.width(), 550 + r.y(), 0, 0);
			else if (label->text() == kFooter && r.height() > 692)//foot on
				label->setGeometry(0.99 * r.width() - 250, 652 + r.y(), 250, 40);
			else if (label->text() == kFooter && r.height() <= 692)//foot off
				label->setGeometry(0.99 * r.width() - 250, 652 + r.y(), 0, 0);
			else if (label->text() == kAdvert3 && r.width() <= 700)//adv3 off
				label->setGeometry(0 + r.x(), 0 + r.y(), 0, 0);
			else if (label->text() == kAdvert3 && r.width() > 700)//adv3 on
				label->setGeometry(0.01 * r.width() + r.x(), 500 + r.y(), 90, 175);
			else if (label->text() == kAdvert4 && r.width() <= 700)//adv4 off
				label->setGeometry(0 + r.x(), 0 + r.y(), 0, 0);
			else if (label->text() == kAdvert4 && r.width() > 700)//adv4 on
				label->setGeometry(0.99 * r.width() - 90 + r.x(), 500 + r.y(), 90, 140);

        }
        catch (bad_cast) {
            // bad_case: cast failed on reference...
            cout << "warning, unknown widget class in layout" << endl;
        }
    }
}


int ResponsiveLayout::count() const {
    return list_.size();
}

QLayoutItem *ResponsiveLayout::itemAt(int idx) const {
    return list_.value(idx);
}

QLayoutItem *ResponsiveLayout::takeAt(int idx) {
    return idx >= 0 && idx < list_.size() ? list_.takeAt(idx) : 0;
}

void ResponsiveLayout::addItem(QLayoutItem *item) {
    list_.append(item);
}

QSize ResponsiveLayout::sizeHint() const {
    return minimumSize();
}

QSize ResponsiveLayout::minimumSize() const {
    return QSize(480,700);
}

ResponsiveLayout::~ResponsiveLayout() {
    QLayoutItem *item;
    while ((item = takeAt(0)))
        delete item;
}


#ifndef RESPONSIVELABEL_H
#define RESPONSIVELABEL_H


#include <QLabel>
#include <QString>
#include <map>

using namespace std;


// Please add to, but DO NOT modify the constants in this file.

// label names that are displayed
const QString
        kHomeLink       = "home",
        kBackButton     = "back",
        kShoppingBasket = "basket",
        kSignIn         = "sign-in",
        kNavTabs        = "shopping",
        kFooter         = "fat footer",
        kAdvert         = "advert",
		kAdvert1        = "advert1",
		kAdvert2        = "advert2",
		kAdvert3	    = "advert3",
		kAdvert4		= "advert4",
        kSearchButton   = "search",
        kSearchResult   = "result",
        kSearchText     = "search query",
        kSearchForward  = ">",
        kSearchBackward = "<",
        kSearchOptions  = "search options",
		kInterest       = "recommendations based on search";

// every label name has a colour
const map<QString, QString> kColours = {
        make_pair(kHomeLink,       "#ffaaff"),
        make_pair(kBackButton,     "#ffffaa"),
        make_pair(kShoppingBasket, "#ffaaaa"),
        make_pair(kSignIn,         "#aaffaa"),
        make_pair(kNavTabs,        "#ffa9d3"),
        make_pair(kFooter,         "#66ffaa"),
        make_pair(kAdvert,         "#ffaa66"),
		make_pair(kAdvert1,        "#ffaa66"),
		make_pair(kAdvert2,        "#ffaa66"),
		make_pair(kAdvert3,        "#ffaa66"),
		make_pair(kAdvert4,        "#ffaa66"),
        make_pair(kSearchButton,   "#aaffff"),
        make_pair(kSearchResult,   "#99ddff"),
        make_pair(kSearchText,     "#aaaaff"),
        make_pair(kSearchForward,  "#5caeff"),
        make_pair(kSearchBackward, "#5caeff"),
        make_pair(kSearchOptions,  "#9dceff"),
		make_pair(kInterest,       "#9dceff")
    };

class ResponsiveLabel : public QLabel {
public:
    ResponsiveLabel(QString name) ;
    ResponsiveLabel(QString name, QString colour) ;
};


#endif // RESPONSIVELABEL_H

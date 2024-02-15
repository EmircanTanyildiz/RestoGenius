//
//  Products.h
//
//  Created by Emir Can Tanyıldız on 18.11.2023.
//

#ifndef Products_h
#define Products_h
#include <iostream>
using namespace std;
class Products{
public:
    Products();
    ~Products();
    void setIsim();
    void setMaliyet();
    void setSatisFiyati();
    void showInfo();
    string getIsim();
    double getMaliyet();
    double getSatisFiyati();
    double showProfit();
private:
    string isim;
    double maliyet;
    double satisFiyati;
};

#endif /* Products_h */

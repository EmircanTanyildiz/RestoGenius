//
//  Order.h
//
//  Created by Emir Can Tanyıldız on 18.11.2023.
//

#ifndef Order_h
#define Order_h
#include <iostream>
#include "Food.h"
#include "phoneNumber.h"
using namespace std;
class Order : public Food, public PhoneNumber{
public:
    Order();
    int ID;
    static int gelenSiparisNo;
    void siparisVer(int _masaNo);
    void siparisVer(string _ilce, string _semt, string _mahalle, string _cadde, string _sokak);
    void siparisleriGoruntule();
private:
    int neresi; //1-online 0-fiziki
    int urunNo[200], urunAdet[200], masaNo;
    string ilce,semt, mahalle, cadde, sokak, isim;
};

#endif /* Order_h */

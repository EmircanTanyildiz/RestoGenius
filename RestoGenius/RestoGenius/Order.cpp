//
//  Order.cpp
//
//  Created by Emir Can Tanyıldız on 18.11.2023.
//

#include <iostream>
#include "Order.h"
#include "Food.h"
#include "phoneNumber.h"
using namespace std;
int Order::gelenSiparisNo = 0;
Order::PhoneNumber phone1;
Order::Order(){
    ID= 0;
}

void Order::siparisVer(string _ilce, string _semt, string _mahalle, string _cadde, string _sokak){
    cout<<"İsminizi Giriniz: ";
    cin>>isim;
    cout<<"Lütfen xxx xxx-xxxx Formatında bir Telefon numarası giriniz "<<endl;
    cin>>phone1;
    int o = 0;
    while (o == 0) {
        yemeklistele();
        cout<<"Seciminizi Yapin: ";
        cin>>urunNo[ID];
        cout<<endl<<"Kac Adet İstiyorsunuz: ";
        cin>>urunAdet[ID];
        cout<<"Devam Etmek istiyorsaniz 0"<<endl<<"Siparis'i tamamlamak icin 1"<<endl;
        cout<<"Seciminiz--> ";
        cin>>o;
        urunNo[gelenSiparisNo] = o;

        cout<<endl;
        ID++;
    }
    ilce = _ilce;
    semt = _semt;
    mahalle = _mahalle;
    cadde = _cadde;
    sokak = _sokak;
    cout<<endl<<"Siparisin Basariyla Olusturuldu "<<isim<<endl;
    neresi = 1;
}
void Order::siparisVer(int _masaNo){
    masaNo = _masaNo;
    int o = 0;
    while (o == 0) {
        yemeklistele();
        cout<<"Seciminizi Yapin: ";
        cin>>urunNo[ID];
        cout<<endl<<"Kac Adet İstiyorsunuz: ";
        cin>>urunAdet[ID];
        cout<<"Devam Etmek istiyorsaniz 0"<<endl<<"Siparis'i tamamlamak icin 1"<<endl;
        cout<<"Seciminiz--> ";
        cin>>o;
        urunNo[gelenSiparisNo] = o;
        cout<<endl;
        ID++;
    }
    cout<<endl<<"Siparisin Basariyla Olusturuldu "<<isim<<endl;
    neresi = 0;
}
void Order::siparisleriGoruntule(){
    int p;
    if (neresi == 1) {
        cout<<isim<<endl;
        cout<<phone1<<endl;
        cout<<sokak<<" / "<<cadde<<" / "<<mahalle<<" /"<<semt<<"/ "<<ilce<<endl;
    } else {
        cout<<"Masa No: "<<masaNo<<endl;
    }
    for(p=0;p<ID;p++){
        yemekBul(urunNo[p]);
        cout<<"Urun Adet: "<<urunAdet[p]<<endl;
    }
}

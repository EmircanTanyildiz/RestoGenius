//
//  Products.cpp
//
//  Created by Emir Can Tanyıldız on 18.11.2023.
//

#include <iostream>
#include "Products.h"
using namespace std;
Products::Products(){
    
}
Products::~Products(){
    
}
void Products::setIsim(){
    cout<<"Urun ismini giriniz: ";
    cin>>isim;
    cout<<endl;
}
void Products::setMaliyet(){
    cout<<"Maliyeti giriniz: ";
    cin>>maliyet;
    cout<<endl;
}
void Products::setSatisFiyati(){
    cout<<"Satis Fiyatini Giriniz: ";
    cin>>satisFiyati;
    cout<<endl;
}
string Products::getIsim(){
    return isim;
}
double Products::getMaliyet(){
    return maliyet;
}
double Products::getSatisFiyati(){
    return satisFiyati;
}
void Products::showInfo(){
    cout<<getIsim()<<endl<<"Maliyet: "<<getMaliyet()<<" ₺"<<endl<<"Satis Fiyati: "<<getSatisFiyati()<<" ₺"<<endl<<"Kar: "<<showProfit()<<" ₺"<<endl;
}
double Products::showProfit(){
    return satisFiyati - maliyet;
}


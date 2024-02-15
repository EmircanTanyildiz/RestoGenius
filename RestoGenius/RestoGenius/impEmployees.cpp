//
//  impEmployees.cpp
//
//  Created by Emir Can Tanyıldız on 17.11.2023.
//

#include <iostream>
using namespace std;
#include "Employees.h"
Employees::Employees(){
    
}
Employees::~Employees(){
    
}
bool Employees::getCalisiyormu(){
    return calisoyormu;
}
int Employees::elemanID = 0;
double Employees::maasHesapla(){
    return getHaftalikCalismaSaati() * getSaatlikUcret() * 4 ;
}
void Employees::setCalisiyormu(){
        cout<<"İsten Cikarmak İcin x'e tiklayiniz"<<endl<<"Vazgecmek icin herhangi bir tus'a basiniz"<<endl;
        string asdf;
        cin>>asdf;
        if (asdf == "x" || asdf== "X") {
            calisoyormu = false;
        }else{
            cout<<"Vazgectiniz"<<endl;
        }
}
void const Employees::elemaniYazdir(){
        cout<<getIsim()<<" "<<getSoyisim()<<endl;
        cout<<"Yas: "<<getYas()<<endl;
        cout<<"Pozisyon: "<<Pozisyon[pozisyonNo]<<endl;
        cout<<"Haftada Kaç Saat Calisiyor: "<<getHaftalikCalismaSaati()<<endl;
        cout<<"Saatlik Ucret: "<<getSaatlikUcret()<<" ₺"<<endl;
        cout<<"Aylik Maas: "<<maasHesapla()<<" ₺"<<endl;
        cout<<"Isveren Maliyeti: "<<maasHesapla() * 1.5<<" ₺"<<endl;
}

int Employees::pozisyonId = 0;
string Employees::Pozisyon[200];
void Employees::addPozisyon(){
    cout<<"Pozisyonu giriniz: ";
    cin>>Pozisyon[pozisyonId];
    pozisyonNo = pozisyonId;
    pozisyonId ++;
}
string Employees::getPozisyon(){
    return Pozisyon[pozisyonNo];
}
void Employees::setPozisyon(){
    int i;
    if (pozisyonId == 0) {
        cout<<"Herhangi bir pozisyon bulunamadi lutfen pozisyon ekleyiniz"<<endl;
    } else {
        for(i = 0; i<pozisyonId; i++){
            cout<<i+1<<"-"<<Pozisyon[i]<<endl;
        }
        cout<<"Pozisyonu Seciniz -> ";
        cin>>pozisyonNo;
        pozisyonNo -= 1;
        cout<<endl;
    }
}

void Employees::setIsim(){
    cout<<"İsmini Giriniz: ";
    cin>>isim;
    cout<<endl<<"Soyismini Giriniz: ";
    cin>>soyIsim;
    cout<<endl;
}
void Employees::setHaftalikCalismaSaati(){
    cout<<"Haftada kac Saat Calisacak: ";
    cin>>haftalikCalismaSaati;
    cout<<endl;
    elemanID ++;
}
void Employees::setYas(){
    cout<<"Yasi Giriniz: ";
    cin>>yas;
    cout<<endl;
}
void Employees::setSaatlikUcret(){
    cout<<"Saatlik Ücreti Giriniz: ";
    cin>>saatlikUcret;
    cout<<endl;
}
string Employees::getIsim(){
    return isim;
}
string Employees::getSoyisim(){
    return soyIsim;
}
int Employees::getYas(){
    return yas;
}
double Employees::getSaatlikUcret(){
    return saatlikUcret;
}
int Employees::getHaftalikCalismaSaati(){
    return haftalikCalismaSaati;
}


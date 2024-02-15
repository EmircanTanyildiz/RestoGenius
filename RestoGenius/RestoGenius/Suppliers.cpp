//
//  Suppliers.cpp
//
//  Created by Emir Can Tanyıldız on 18.11.2023.
//

#include <iostream>
#include "Suppliers.h"
#include "phoneNumber.h"
#include "Products.h"
using namespace std;
Suppliers::Suppliers(){
    minimumTutar = 0;
}
Suppliers::~Suppliers(){
    
}
int Suppliers::suppliersID = 0;
Suppliers::PhoneNumber phone;
void Suppliers::showInfo(){
    cout<<"-------------------"<<endl;
    cout<<isim<<endl;
    cout<<phone<<endl;
    
    cout<<"Firma Kategorisi: "<<firmaKategori[kategoriNo]<<endl;
    
    cout<<"Firma Sattigi Urunler"<<endl<<"-----------------"<<endl;
    urunListele();
    cout<<"Minimum Siparis Tutari: ";
    cout<<getMinimumSiparisMiktari()<<" ₺"<<endl;
    cout<<"-------------------"<<endl<<endl;
}

int Suppliers::kategoriId = 0;
int Suppliers::productId = 0;

string Suppliers::firmaKategori[200];
Suppliers::Products p1[200];

void Suppliers::setUrun(){
    int u = 0;
    while (u == 0) {
        p1[productId].setIsim();
        p1[productId].setMaliyet();
        p1[productId].setSatisFiyati();
        productId++;
        cout<<"Urun girmeye Devam etmek istiyormusunuz\nEvet: 0\tHayir 1"<<endl;
        cin>>u;
    }

}
void Suppliers::urunListele(){
    int j;
    if (productId == 0) {
        cout<<"Listelenilecek urun bulunamadi"<<endl;
    } else {
        for(j=0;j<productId;j++){
            cout<<p1[j].getIsim()<<endl;
            cout<<"Maliyet: "<<p1[j].getMaliyet()<<" ₺"<<endl;
            cout<<"Satis Fiyati: "<<p1[j].getSatisFiyati()<<" ₺"<<endl;
            cout<<"Kar: "<<p1[j].showProfit()<<" ₺"<<endl;
            cout<<"----------------"<<endl;
        }
    }
}

void Suppliers::setIsim(){
    cout<<"Firmanin ismini giriniz: ";
    cin>>isim;
    cout<<endl;
}
void Suppliers::setPhone(){
    cout<<"Lütfen xxx xxx-xxxx Formatında bir Telefon numarası giriniz "<<endl;
    cin>>phone;
}
void Suppliers::addKategori(){
    cout<<"Firma Kategorisini giriniz: ";
    cin>>firmaKategori[kategoriId];
    cout<<endl;
    kategoriId ++;
}
void Suppliers::setKategori(){
    int y;
    if (kategoriId == 0) {
        addKategori();
        kategoriNo = 0;
    } else {
        
        for(y = 0; y<kategoriId; y++){
            cout<<y+1<<"-"<<firmaKategori[y]<<endl;
        }
        cout<<"----------"<<endl<<"Kategori Seciniz -> ";
        cin>>kategoriNo;
        kategoriNo = kategoriNo - 1;
    }
}
void Suppliers::setMinTutar(){
    cout<<"Tedarikcinin minimum siparis miktari ne kadar: ";
    cin>>minimumTutar;
    cout<<endl;
    suppliersID ++;
}
double Suppliers::getMinimumSiparisMiktari(){
    return minimumTutar;
}

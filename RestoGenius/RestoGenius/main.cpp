#include <iostream>
#include "Employees.h"
#include "Suppliers.h"
#include "Food.h"
#include "Order.h"
#include "Courier.h"
#include "Chromosome.h"
#include <random>
#include <unistd.h>

using namespace std;
int main() {
    Employees e1[200];
    Suppliers s1[200];
    Order o1[200];
    Courier kurye;
    Food f1;
    int iii = 0;
    while (iii == 0) {
        int qwerty;
        cout<<"TSP Cozumu icin 1"<<endl;
        cout<<"RestoGenius icin 2"<<endl;
        cout<<"--> ";
        cin>>qwerty;
        switch (qwerty) {
            case 1:
                kurye.tumIslemler();
                iii++;
                break;
            case 2:
                iii++;
                break;
            default:
                cout<<"Hatali Tuslama Lutfen Tekrar Deneyiniz"<<endl;
                break;
        }
    }
    
    
    cout<<"Resto Genius'a Hoş Geldiniz"<<endl;
    sleep(1);
    cout<<"Baslamak icin bazi temel bilgilere ihtiyacimiz var"<<endl;
    sleep(1);
    cout<<"Lutfen Menunuzu Olusturun: "<<endl;
    sleep(1);
    cout<<"Kac adet yemek girmek istiyorsunuz (En Az 2 Olmalidir): ";
    int x,i;
    cin>>x;
    for(i = 0;i<x;i++){
        f1.yemekolustur();
    }
    
    cout<<"Calisanlarinizi ekleyiniz"<<endl;
    e1[Employees::elemanID].setIsim();
    e1[Employees::elemanID].setYas();
    e1[Employees::elemanID].setSaatlikUcret();
    e1[Employees::elemanID].addPozisyon();
    e1[Employees::elemanID].setHaftalikCalismaSaati();
     
    int xxx = 0;
    
    while(xxx==0) {
        cout<<"Travelling Salesman Problem Cozumu icin 0"<<endl;
        cout<<"Musteri Paneli İcin 1"<<endl;
        cout<<"Restorant Paneli icin 2"<<endl;
        cout<<"3-Cikis"<<endl;
        int panel;
        cin>>panel;
        cout<<endl;
        string tmpisim, tmpadres;
        int tmpkisi;
        switch (panel) {
            case 0:
                kurye.tumIslemler();
                break;
            case 1:
                cout<<"1-Restoranttamisiniz "<<endl;
                cout<<"2-Online mi"<<endl;
                int nerede;
                cin>>nerede;
                cout<<endl;
                switch (nerede) {
                    case 1:
                        int masaNo;
                        cout<<"Masa numaranizi giriniz: ";
                        cin>>masaNo;
                        o1[Order::gelenSiparisNo].siparisVer(masaNo);
                        Order::gelenSiparisNo++;
                        break;
                    case 2:
                        int yyy;
                        cout<<"1-Online Siparis ver"<<endl;
                        cin>>yyy;
                        cout<<endl;
                        if(yyy==1){
                            string ilce,semt,mahalle,cadde,sokak;

                            cout<<"Ilce giriniz: ";
                            cin>>ilce;
                            cout<<endl;
                            
                            cout<<"Semt giriniz: ";
                            cin>>semt;
                            cout<<endl;
                            
                            cout<<"Mahalle giriniz: ";
                            cin>>mahalle;
                            cout<<endl;
                            
                            cout<<"Cadde giriniz: ";
                            cin>>cadde;
                            cout<<endl;
                            cout<<"Sokak giriniz: ";
                            cin>>sokak;
                            cout<<endl;
                            o1[Order::gelenSiparisNo].siparisVer(ilce, semt, mahalle, cadde, sokak);
                            Order::gelenSiparisNo++;
                        }else{
                            cout<<"Hatali Secim"<<endl;
                        }
                                
                                
                          
                        
                        break;
                    default:
                        cout<<"Hatali Secim"<<endl;
                        break;
                }
                break;
            case 2:
                int uuuuu;
                cout<<"1-Menu Islemleri"<<endl;
                cout<<"2-Personel Islemleri"<<endl;
                cout<<"3-Tedarikci Islemleri"<<endl;
                cout<<"4-Siparisleri Goruntule"<<endl;
                cin>>uuuuu;
                switch (uuuuu) {
                    case 1:
                        cout<<"1-Yemek Olustur"<<endl;
                        cout<<"2-Yemek Sil"<<endl;
                        cout<<"3-Yemekleri Listele"<<endl;
                        int vvv;
                        cin>>vvv;
                        cout<<endl;
                        switch (vvv) {
                            case 1:
                                f1.yemekolustur();
                                // Yemek Olustur
                                break;
                          
                            case 2:
                            //yemek sil
                                f1.yemeklistele();
                                f1.yemeksil();
                                cout<<"Silmek istediğiniz Id'yi Giriniz: ";
                                
                                break;
                            case 3:
                                // yemek listele
                                f1.yemeklistele();
                                break;
                            
                        }
                        break;
                    case 2:
                        cout<<"1-Personel Ekle"<<endl;
                        cout<<"2-Personelleri Goruntule"<<endl;
                        cout<<"3-Personel Isten Cikar"<<endl;
                        int ppp;
                        cin>>ppp;
                        cout<<endl;
                        switch (ppp) {
                            case 1:
                                e1[Employees::elemanID].setIsim();
                                e1[Employees::elemanID].setYas();
                                e1[Employees::elemanID].setSaatlikUcret();
                                cout<<"Yeni bir pozisyon icin 5\n yoksa 1: ";
                                int yeni;
                                cin>>yeni;
                                if (yeni==5) {
                                    e1[Employees::elemanID].addPozisyon();
                                }
                                else{
                                    e1[Employees::elemanID].setPozisyon();
                                }
                                e1[Employees::elemanID].setHaftalikCalismaSaati();

                                break;
                            case 2:
                                int h;
                                for(h=0;h<Employees::elemanID;h++){
                                    if (e1[h].getCalisiyormu() == true) {
                                        e1[h].elemaniYazdir();
                                        cout<<endl;
                                    }
                                }
                                break;
                            case 3:
                                int hq;
                                for(hq=0;hq<Employees::elemanID;hq++){
                                    cout<<hq<<"-";
                                    if (e1[hq].getCalisiyormu() == true) {
                                        e1[hq].elemaniYazdir();
                                        cout<<endl;
                                    }
                                }
                                int cikarilacakKisi;
                                cout<<"Cikarmak istediginiz elemani seciniz: ";
                                cin>>cikarilacakKisi;
                                e1[cikarilacakKisi].setCalisiyormu();
                                break;
                            default:
                                break;
                        }
                        break;
                    case 3:
                        cout<<"1-Tedarikcileri Goruntule"<<endl;
                        cout<<"2-Tedarikci ekle"<<endl;
                        int ttt;
                        cin>>ttt;
                        cout<<endl;
                        switch (ttt) {
                            case 1:
                                int r;
                                for(r=0;r<Suppliers::suppliersID;r++){
                                    s1[r].showInfo();
                                }
                                break;
                            case 2:
                                s1[Suppliers::suppliersID].setIsim();
                                s1[Suppliers::suppliersID].setPhone();
                                s1[Suppliers::suppliersID].setKategori();
                                s1[Suppliers::suppliersID].setUrun();
                                s1[Suppliers::suppliersID].setMinTutar();
                                break;
                            default:
                                cout<<"Hatali Secim"<<endl;
                                break;
                        }
                        break;
                    case 4:
                        int forOrder;
                        for(forOrder = 0; forOrder < Order::gelenSiparisNo; forOrder++){
                            o1[forOrder].siparisleriGoruntule();
                            cout<<endl<<"------------------"<<endl;
                        }
                        break;
                  
   
                    default:
                        cout<<"Hatali Secim"<<endl;
                        break;
                }
                break;
            case 3:
                xxx++;
                break;
            default:
                cout<<"Hstali Secim Lutfen tekrar deneyiniz"<<endl;
                break;
        }
    }

    return 0;
}

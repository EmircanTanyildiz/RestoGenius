#include <iostream>
#include <string>
#include "Food.h"

using namespace std;
Food ymk[30];
int ymk_count = 0;


Food::Food() {}

Food::~Food() {}

Food::Food(const string& isim, double fiyat, const string& icerik, double maliyet) : isim(isim), fiyat(fiyat), icerik(icerik), maliyet(maliyet) {}

void Food::yemekolustur() {
    Food newYemek;

    newYemek.id = ymk_count;
    cout << "Yemegin ismini giriniz: " << endl;
    cin >> newYemek.isim;
    cout << "Yemegin icerigini giriniz: " << endl;
    cin >> newYemek.icerik;
    cout << "Yemegin fiyatini giriniz: " << endl;
    cin >> newYemek.fiyat;
    cout << "Yemegin maliyetini giriniz: " << endl;
    cin >> newYemek.maliyet;

    if (ymk_count < 30) {
        ymk[ymk_count] = newYemek;
        ymk[ymk_count].id = ymk_count;
        ymk_count++;
    }

}
void Food::yemekBul(int _id){
    int id;
    id = _id;

    bool found = false;
    for (int i = 0; i < ymk_count; i++) {
        const auto& yemek = ymk[i];
        if (yemek.id == _id) {
            cout << "Yemek Kodu: " << yemek.id << endl;
            cout << "Yemek Isim: " << yemek.isim << endl;
            cout << "Yemek Icerik: " << yemek.icerik << endl;
            cout << "Yemek Fiyat: " << yemek.fiyat << endl;
            cout << "Yemek Maliyet: " << yemek.maliyet << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "ID bulunamadi" << endl;
    }
}
void Food::yemekara() {
    int id;
    cout << "Aramak istediginiz yemegin ID'sini giriniz:" << endl;
    cin >> id;

    bool found = false;
    for (int i = 0; i < ymk_count; i++) {
        const auto& yemek = ymk[i];
        if (yemek.id == id) {
            cout << "Yemek Kodu: " << yemek.id << endl;
            cout << "Yemek Isim: " << yemek.isim << endl;
            cout << "Yemek Icerik: " << yemek.icerik << endl;
            cout << "Yemek Fiyat: " << yemek.fiyat << endl;
            cout << "Yemek Maliyet: " << yemek.maliyet << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "ID bulunamadi" << endl;
    }
}



void Food::yemeksil() {
    cout << "Silmek istediginiz yemegin ID'sini giriniz:" << endl;
    int id;
    cin >> id;


    for (int i = 0; i < ymk_count; i++) {
        if (ymk[i].id == id) {
            for (int j = i; j < ymk_count - 1; j++) {
                ymk[j] = ymk[j + 1];
            }
            ymk_count--;
            cout << "Yemek basariyla silindi!" << endl;
            return;
        }
    }

}

void Food::yemeklistele() {
    cout << "Mevcut Yemekler: " << endl;
    for (int i = 0; i < ymk_count; i++) {
        auto& yemek = ymk[i];
        cout << "Yemek Kodu: " << yemek.id << endl;
        cout << "Yemek Isim: " << yemek.isim << endl;
        cout << "Yemek Icerik: " << yemek.icerik << endl;
        cout << "Yemek Fiyat: " << yemek.fiyat << endl;
        cout << "" << endl;
    }
}


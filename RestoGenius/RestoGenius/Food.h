#pragma once
#include <string>
using namespace std;

class Food {
public:
    Food();
    ~Food();
    Food(const string& isim, double fiyat, const string& icerik, double maliyet);
    void yemekolustur();
    void yemeksil();
    void yemekara();
    void yemekBul(int _id);
    void yemeklistele();
private:
    int id;
    string isim;
    double fiyat;
    string icerik;
    double maliyet;
};

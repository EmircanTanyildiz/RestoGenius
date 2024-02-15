//
//  Suppliers.h
//
//  Created by Emir Can Tanyıldız on 18.11.2023.
//

#ifndef Suppliers_h
#define Suppliers_h
#include <iostream>
#include "phoneNumber.h"
#include "Products.h"
using namespace std;
class Suppliers : public PhoneNumber, public Products{
public:
    Suppliers();
    ~Suppliers();
    static int suppliersID;
    static string firmaKategori[200];
    static int kategoriId;
    static int productId;
    void setIsim();
    void setPhone();
    void addKategori();
    void setKategori();
    void setMinTutar();
    void setUrun();
    void urunListele();
    double getMinimumSiparisMiktari();
    void showInfo();
    
private:
    string isim;
    double minimumTutar;
    int kategoriNo;
};

#endif /* Suppliers_h */

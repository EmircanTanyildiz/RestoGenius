//
//  Employees.h
//
//  Created by Emir Can Tanyıldız on 17.11.2023.


#ifndef Employees_h
#define Employees_h
using namespace std;
class Employees{
public:
    Employees();
    ~Employees();
    
    static string Pozisyon[200];
    static int pozisyonId;
    static int elemanID;
    void const elemaniYazdir();
    void setCalisiyormu();
    void setIsim();
    void setYas();
    void setSaatlikUcret();
    void addPozisyon();
    void setPozisyon();
    void setHaftalikCalismaSaati();
    
    string getIsim();
    string getSoyisim();
    int getYas();
    double getSaatlikUcret();
    double maasHesapla();
    string getPozisyon();
    int getHaftalikCalismaSaati();
    int getKonum();
    bool getCalisiyormu();
private:
    bool calisoyormu = true;
    string isim, soyIsim;
    int yas, timeSet, pozisyonNo;
    double saatlikUcret;
    int haftalikCalismaSaati;
    
};

#endif /* Employees_h */

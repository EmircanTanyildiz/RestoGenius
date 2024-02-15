#ifndef Rota_h
#define Rota_h
#include "Chromosome.h"
#include <iostream>
using namespace std;
class Courier{
public:
    
    Courier();
    ~Courier();
    Chromosome c1[3000];
    void tumIslemler();
    void popCreate();
    void caprazlama();
    bool checkKromozom(int _x[8]);
    void printKromozomlar();
    void sirala();
    void kromozomEle();
    void printKromozom();
    bool isValidGen(int gen1, int gen2) {
        return hazirMatris[gen1][gen2] != 0; // 0 olmayan değerlere sahipse geçerli bir yol vardır
    }
private:
    int genesTemp[8];
    int kromozomID = 0;
    int popSize = 1000;
    int countKromozom = 0;
    int tempGenes[8];
    const int tekrarSayisi = 8;
    int deneme1Genes[8];
    int checkTempGenes[8];
    int checkCheckTempGenes = 1; // checkTempGenesToplam
    int isDogru = 1;
    int hazirMatris[8][8]={
        {0, 7, 5, 4, 3, 2, 8, 10},
        {7, 0, 8, 12, 13, 3, 2, 1},
        {5, 8, 0, 5, 8, 9, 11, 6},
        {4, 12, 5, 0, 4, 7, 16, 8},
        {3, 13, 8, 4, 0, 2, 5, 4},
        {2, 3, 9, 7, 2, 0, 8, 6},
        {8, 2, 11, 16, 5, 8, 0, 4},
        {10, 1, 6, 8, 4,6,4, 0}
        };
};

#endif /* Rota_h */


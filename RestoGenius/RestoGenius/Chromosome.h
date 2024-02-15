//
//  Chromosome.h
//
//  Created by Emir Can Tanyıldız on 31.12.2023.
//

#ifndef Chromosome_h
#define Chromosome_h
#include <iostream>
using namespace std;
class Chromosome{
public:
    int baslangicGen = 0;
    int maliyet = 0;
    bool isActive = false;
    int popBedel;
    int Genes[8];
private:
};

#endif /* Chromosome_h */

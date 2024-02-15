//
//  phoneNumberImp.cpp
//
//  Created by Emir Can Tanyıldız on 18.11.2023.
//

#include <iostream>
#include <iomanip>
using namespace std;
#include <string>
#include "phoneNumber.h"

ostream &operator<<(ostream &output, const PhoneNumber &number){
    output<<"+90 "<<number.arenaKodu<<" "<<number.exchange<<"-"<<number.line;
    return output;
}


istream &operator>>(istream &input, PhoneNumber &number){
    input>>setw(3)>>number.arenaKodu;
    input.ignore();
    input>>setw(3)>>number.exchange;
    input.ignore();
    input>>setw(4)>>number.line;
    return input;
}
// (xxx) xxx-xxxx



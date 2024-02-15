//
//  phoneNumber.h
//
//  Created by Emir Can Tanyıldız on 18.11.2023.
//

#ifndef phoneNumber_h
#define phoneNumber_h
#include <iostream>
#include <string>
using namespace std;
class PhoneNumber{
    friend ostream &operator<<(ostream &output, const PhoneNumber &number);
    friend istream &operator>>(istream &input, PhoneNumber &number);
    
private:
    string arenaKodu;
    string exchange;
    string line;
};



#endif /* phoneNumber_h */


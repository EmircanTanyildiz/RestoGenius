//
//  Courier.cpp

#include <iostream>
#include "Courier.h"
#include <random>
#include <unistd.h>
#include <set>
using namespace std;
Courier::Courier(){
    for (int y=0; y<8; y++) {
        checkTempGenes[y] = 0;
        deneme1Genes[y] = y;
        genesTemp[y] = 0;
    }
}
Courier::~Courier(){
    
}
void Courier::sirala(){
    int geciciMaliyet = 100000;
    int maliyetIndis;
    cout<<"En Az Maliyetli Yol:"<<endl<<"------------------------"<<endl;
    for(int e = 0;e<countKromozom;e++){
        if (c1[e].maliyet < geciciMaliyet && c1[e].isActive == true) {
            geciciMaliyet = c1[e].maliyet;
            maliyetIndis = e;
        }
    }
        cout<<maliyetIndis + 1<<". Kromozom:\t";
        for(int h=0; h<8;h++){
            cout<<c1[maliyetIndis].Genes[h]<<" ";
        }
        cout<<"\tMaliyet: "<<c1[maliyetIndis].maliyet<<" Km";
        cout<<endl;
    cout<<"(NOT: Kromozomun Genleri Dugumleri temsil eder, Maliyet Hesaplanirken hazir matris uzerindeki degerler hesaba alinir)"<<endl;
    }


void Courier::tumIslemler(){
    cout<<"Sanal Olarak 8 farklı hedef belirlenmiştir, ve bunlardan bir matris oluşturulmuştur (Courier.h)"<<endl<<endl;
    sleep(4);
    cout<<"Kuryenin konumları birbirinden farklı olan 8 farklı olan hedefin hepsini dolasarak minumum zamanda ve minunum maliyetle gitmesi beklenmektedir"<<endl<<endl;
    sleep(4);
    cout<<"Bu Problemin (TSP) cozumu icin Genetik algoritma Kullanilmistir"<<endl<<endl;
    sleep(4);
    cout<<"Baslangiz 1000 Kromozomlu Populasyon Olusturuluyor ..."<<endl<<endl;
    sleep(1);
    cout<<"-3-"<<endl;
    sleep(1);
    cout<<"-2-"<<endl;
    sleep(1);
    cout<<"-1-"<<endl;
    sleep(1);
    popCreate();
    kromozomEle();
    printKromozom();
    sleep(2);
    sirala();
    sleep(3);
    cout<<endl;
    cout<<"Caprazlama Yapiliyor ..."<<endl;
    sleep(1);
    cout<<"-3-"<<endl;
    sleep(1);
    cout<<"-2-"<<endl;
    sleep(1);
    cout<<"-1-"<<endl;
    sleep(1);
    cout<<"Hatali Gen'e Sahip olanlar eleniyor"<<endl;
    sleep(1);
    caprazlama();
    kromozomEle();
    printKromozom();
    sleep(2);
    sirala();
    sleep(5);
}
void Courier::caprazlama(){
    for (int u=0; u<2000; u++) {
        for(int y = 0;y<4;y++){
            c1[u+1000].Genes[y] = c1[u].Genes[y];
            c1[u+1000].Genes[y+4] = c1[u+1].Genes[y+4];
        }
        countKromozom++;
    }
}
void Courier::printKromozom(){
    for(int t = 0; t<countKromozom; t++){
        if (c1[t].isActive == true) {
            cout<<t+1<<". Kromozom:\t";
            for(int h=0; h<8;h++){
                cout<<c1[t].Genes[h]<<" ";
            }
            for (int y = 0; y<7; y++) {
                c1[t].maliyet += hazirMatris[c1[t].Genes[y]][c1[t].Genes[y+1]];
            }
            cout<<"\tMaliyet: "<<c1[t].maliyet<<" Km";
            cout<<endl;
            sleep(0.2);
        }
        else{
            //cout<<t+1<<". Kromozom:\tHatali Gen Elendi"<<endl;;
            c1[t].maliyet = 100000;
        }
    }
    
        
}
void Courier::kromozomEle(){
    int _toplam;
    for (int g=0; g<countKromozom; g++) {
        _toplam=0;
        for (int h=0; h<8; h++) {
            _toplam += c1[g].Genes[h];
        }
        if (_toplam > 28 || _toplam < 28) {
            c1[g].isActive = false;
        }else{
            c1[g].isActive = true;
        }
    }
    
}

void Courier::popCreate(){
    for (int _kromozomID = 0; _kromozomID < popSize; _kromozomID++) {
        int uu = 1;
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(1, 7);
        
        set<int> uniqueNumbers;
        c1[_kromozomID].Genes[0] = 0;
        
        for (int i = 1; i < tekrarSayisi; ++i) {
            int randomSayi;
            
            do {
                randomSayi = dis(gen);
            } while (!uniqueNumbers.insert(randomSayi).second);
            // Geçerli bir gen üretene kadar döngüyü tekrarla
            
            while (!isValidGen(c1[_kromozomID].Genes[uu - 1], randomSayi)) {
                uniqueNumbers.erase(randomSayi);
                randomSayi = dis(gen);
                uniqueNumbers.insert(randomSayi);
            }
            
            c1[_kromozomID].Genes[uu] = randomSayi;
            uu++;
        }
        
        kromozomID = popSize;
        countKromozom = 1000;
        // Kromozomun genlerini ekrana yazdır
    }
    
}


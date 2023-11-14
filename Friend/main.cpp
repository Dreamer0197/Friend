#include <iostream>
using namespace std;
class tarih{
    int gun,ay,yil;
public:
    tarih(int a,int b,int c):gun(a),ay(b),yil(c){}
    void yazt(){
        cout<<gun<<"/"<<ay<<"/"<<yil<<endl;
    }
};
class kisi{
    string s;
    tarih x;
public:
    //tarih x;
    kisi(string isim,int a,int b,int c):x(a,b,c){s=isim;}
    void yazk(){
        cout<<s<<" ";
        //x.yazt();
    }
    tarih gett(){
        return x;
    }
    friend void yaz(kisi bir);
};

void yaz(kisi);

int main(int argc, const char * argv[]) {
    kisi bir("ahmet",20,10,2000);
    bir.yazk();
    //bir.x.yazt();
    yaz(bir);
    return 0;
}
void yaz(kisi bir){
    bir.yazk();
    bir.x.yazt();
    
}

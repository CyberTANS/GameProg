#include <iostream>

using namespace std;

class character{
public:

    int herbs = 5;
    int manapot = 5;
    int hppot = 5;
    int swords[3] = {100,200,300};

    int equipedsword=0;
    int hp = 900;
    int mana = 900;
    int dmg = swords[equipedsword];





    void useherb(){
        if(herbs<1){
            cout << "you dont have herbs" << endl;
        }else if(hp>=1000){
            cout << "you dont need to use herbs" << endl;
        }else{
        herbs=herbs-1;
        hp=hp+10;
        cout << "you used herbs +10hp" << endl;
        }
    }
    void usehppot(){
        if(hppot<=1){
            cout << "you dont have hp pot" << endl;
        }else if(hp>=1000){
            cout << "you dont need to use hp pot" << endl;
        }else{
        hppot=hppot-1;
        hp=hp+50;
        cout << "you used hp pot +50hp" << endl;
        }
    }
    void usemanapot(){
        if(manapot<=1){
            cout << "you dont have mana pot" << endl;
        }else if(mana>=1000){
            cout << "you dont need to use mana pot" << endl;
        }else{
        manapot=manapot-1;
        mana=mana+50;
        cout << "you used mana pot +10mana" << endl;
        }
    }

    void changesword(int a){
        dmg=dmg-swords[equipedsword]+swords[a];
        equipedsword=a;
    }

    void showstat(){
        cout << "hp = " << hp << endl;
        cout << "mana = " << mana << endl;
        cout << "dmg = " << dmg << endl;
        cout << "you use sword number = " << equipedsword << endl << endl;
    }
    void showbag(){
        cout << "====inventory=====" << endl;
        cout << "herbs = " << herbs << endl;
        cout << "mana pot = " << manapot << endl;
        cout << "hp pot = " << hppot << endl << endl;
    }
};


int main()
{
    character simon;
    simon.showstat();
    simon.showbag();

    simon.useherb();
    simon.usemanapot();
    simon.usehppot();
    simon.changesword(1);

    cout << endl;

    simon.showstat();
    simon.showbag();


    return 0;
}

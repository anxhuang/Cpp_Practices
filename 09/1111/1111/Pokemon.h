//
//  Pokemon.h
//  1111
//
//  Created by user on 2022/7/16.
//

#ifndef Pokemon_h
#define Pokemon_h

#include <iostream>
using namespace std;

class Pokemon {
public:
    Pokemon();
    Pokemon(string na, int lv, int hp);
    ~Pokemon();
    void addItem(string item);
    void ShowInfo();
    void Attack(Pokemon &tg);
    void Defence(int atkp);
    void Cure();
 
private:
    void setData(string na, int lv, int hp);
    string Name;
    int Lv;
    int HpMax;
    int HpCur;
    string *items;
    int itemNum;
};

#endif /* Pokemon_h */

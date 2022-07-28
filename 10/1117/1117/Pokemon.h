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

// CLASS: Pokemon
class Pokemon {
public:
    Pokemon();
    Pokemon(string na, int lv, int hp);
    void addItem(string item);
    void ShowInfo();
    void operator>>(Pokemon &tg);
    void Defence(int atkp);
    void Cure();
    friend class PokemonHealthCenter;
 
private:
    void setData(string na, int lv, int hp);
    string Name;
    int Lv;
    int HpMax;
    int HpCur;
};

// CLASS: PokemonHealthCenter
typedef class PokemonHealthCenter {
public:
    PokemonHealthCenter(string);
    void operator<<(Pokemon&);
private:
    string Name;
} PC;

#endif /* Pokemon_h */

//
//  Pokemon.h
//  1108
//
//  Created by user on 2022/7/16.
//

#ifndef Pokemon_h
#define Pokemon_h

#include <string>
#include <iostream>

using namespace std;

class Pokemon {
    public:
        string Name;
        int Lv;
        int HpMax;
        int HpCur;
        void ShowInfo();
        void Attack(Pokemon&);
        void Defence(int);
        void Cure();
};

#endif /* Pokemon_h */

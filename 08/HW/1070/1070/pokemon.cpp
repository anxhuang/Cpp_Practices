//
//  pokemon.cpp
//  1070
//
//  Created by user on 2022/7/10.
//

#include <iostream>
#include "pokemon.h"

using namespace std;

void InputData(struct Pokemon &p) {
    cin >> p.Name
        >> p.Lv
        >> p.Hp;
}
void ShowInfo(struct Pokemon p) {
    cout << "Name: " << p.Name << endl
        << "Lv: " << p.Lv << endl
        << "HP: " << p.Hp << endl << endl;
}

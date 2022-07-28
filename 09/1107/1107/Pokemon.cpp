//
//  Pokemon.cpp
//  1107
//
//  Created by user on 2022/7/16.
//

#include "Pokemon.h"

void Pokemon::ShowInfo() {
    cout << "Name: " << Name << endl
         << "Lv: " << Lv << endl
         << "HP: " << HpCur << "/" << HpMax << endl
         << endl;
}

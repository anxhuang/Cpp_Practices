//
//  Pokemon.cpp
//  1109
//
//  Created by user on 2022/7/16.
//

#include "Pokemon.h"

void Pokemon::setData(string name, int lv, int hp) {
    if (name == "") {
        cout << "Name can't be empty." << endl;
        Name = "No Name";
    } else {
        Name = name;
    }
    
    if (lv <= 1) {
        cout << "Lv setting error." << endl;
        Lv = 1;
    } else {
        Lv = lv;
    }
    
    if (hp <= 1) {
        cout << "Hp setting error." << endl;
        HpCur = 1;
        HpMax = 1;
    } else {
        HpCur = hp;
        HpMax = hp;
    }
}

void Pokemon::ShowInfo() {
    cout << "Name: " << Name << endl
         << "Lv: " << Lv << endl
         << "HP: " << HpCur << "/" << HpMax << endl
         << endl;
}

void Pokemon::Attack(Pokemon &Target) { //攻擊
    if (HpCur <= 0) {
        cout << Name << " is unable to attack." << endl;
        return;
    }
    if (Target.HpCur <= 0) {
        cout << Name << " cannot attack fainted target " << Target.Name <<"." << endl;
        return;
    }
    cout << Name << " Attack " << Target.Name << " " << Lv << " " << "Points." << endl;
    Target.Defence(Lv);
}
void Pokemon::Defence(int atkp) { // 防御(被攻擊？)
    HpCur -= atkp;
    if (HpCur <= 0) {
        HpCur = 0;
        cout << Name << " is fainted." << endl;
    }
}
void Pokemon::Cure() { // 治癒
    HpCur = HpMax;
    cout << Name << " has restore health." << endl;
}

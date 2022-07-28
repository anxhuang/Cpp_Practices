//
//  Pokemon.c
//  1108
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

void Pokemon::Attack(Pokemon &Target) { //攻擊
    Target.Defence(Lv);
    cout << Name << " Attack " << Target.Name << " " << Lv << " " << "Points." << endl;
}
void Pokemon::Defence(int atkp) { // 防御(被攻擊？)
    HpCur -= atkp;
}
void Pokemon::Cure() { // 治癒
    HpCur = HpMax;
    cout << Name << " has restore health." << endl;
}

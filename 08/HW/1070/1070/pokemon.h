//
//  pokemon.h
//  1070
//
//  Created by user on 2022/7/10.
//

#ifndef pokemon_h
#define pokemon_h

#include <string>

struct Pokemon {
    std::string Name;
    int Lv;
    int Hp;
};
 
void InputData(struct Pokemon &);
void ShowInfo(struct Pokemon);

#endif /* pokemon_h */

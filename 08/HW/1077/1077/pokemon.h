//
//  pokemon.h
//  1077
//
//  Created by user on 2022/7/10.
//

#ifndef pokemon_h
#define pokemon_h

struct Pokemon {
    char Name[100];
    int Lv;
    int Hp;
};
 
void InputData(struct Pokemon *);
void ShowInfo(struct Pokemon);

#endif /* pokemon_h */

#include <stdio.h>
#define N 3

typedef struct Pokemon {
    char Name[100];
    int Lv;
    int Hp;
} Pokemon;

int main() {
    
    Pokemon pkms[N];
    
    for (int i=0; i<N; i++) {
        scanf("%s", pkms[i].Name);
        scanf("%d", &pkms[i].Lv);
        scanf("%d", &pkms[i].Hp);
    }
    
    int limit;
    scanf("%d", &limit);
    
    int found = 0;
    for (int i=0; i<N; i++) {
        Pokemon pkm = pkms[i];
        if (pkm.Lv < limit) {
            continue;
        } else {
            found = 1;
        }
        printf("Name: %s\n", pkm.Name);
        printf("Lv: %d\n", pkm.Lv);
        printf("HP: %d\n\n", pkm.Hp);
    }
    
    if (!found) {
        printf("not found");
    }
    
    return 0;
}

/**
 說明
 設計一個Pokemon結構包含下列成員：

 char Name[100]: 名字
 int Lv: 等級
 int Hp: 血量
 使用Pokemon 結構宣告一結構陣列 並輸入3筆Pokemon料後，令使用者輸入一數字n
 並印出「等級」在n以上的Pokemon資訊
 若是沒有任何符合條件的pokemon，則需印出not found

 Input Format
 名字1
 等級1
 血量1
 名字2
 等級2
 血量2
 名字3
 等級3
 血量3
 數字n

 Output Format
 等級n以上的 Pokemon 1資訊(換行二次)
 等級n以上的 Pokemon 2資訊(換行二次)
 ....

 Sample Input
 Mewtwo
 30
 300
 Pikachu
 10
 50
 HelloKitty
 50
 500
 30
 
 Sample Output
 Name: Mewtwo
 Lv: 30
 HP: 300
  
 Name: HelloKitty
 Lv: 50
 HP: 500
  
 */

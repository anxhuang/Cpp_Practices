#include <stdio.h>

struct Pokemon {
    char Name[100];
    int Lv;
    int Hp;
};

int main() {
    
    struct Pokemon p1;
    struct Pokemon p2;
    
    scanf("%s", p1.Name);
    scanf("%d", &p1.Lv);
    scanf("%d", &p1.Hp);
    
    scanf("%s", p2.Name);
    scanf("%d", &p2.Lv);
    scanf("%d", &p2.Hp);
    
    printf("Name: %s\n", p1.Name);
    printf("Lv: %d\n", p1.Lv);
    printf("HP: %d\n\n", p1.Hp);
    
    printf("Name: %s\n", p2.Name);
    printf("Lv: %d\n", p2.Lv);
    printf("HP: %d\n\n", p2.Hp);
    
    return 0;
}

/**
 說明
 設計一個Pokemon結構包含下列成員：

 char Name[100]: 名字
 int Lv: 等級
 int Hp: 血量
 使用Pokemon 結構宣告兩個結構實體並印出它們的資訊

 Input Format
 名字1
 等級1
 血量1
 名字2
 等級2
 血量2

 Output Format
 Pokemon 1資訊(換行二次)
 Pokemon 2資訊(換行二次)

 Sample Input
 Mewtwo
 30
 300
 Pikachu
 10
 50
 
 Sample Output
 Name: Mewtwo
 Lv: 30
 HP: 300
  
 Name: Pikachu
 Lv: 10
 HP: 50
  
 Hint
 ※如果是Wrong Answer@8，請注意最後的換行
 */

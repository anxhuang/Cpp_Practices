//
//  main.cpp
//  1110
//
//  Created by user on 2022/7/16.
//

#include <iostream>
#include "Pokemon.h"
 
using namespace std;
 
int main() {
 
    string name;
    int lv, hp;
 
    cin >> name >> lv >> hp;
    Pokemon *p1 = new Pokemon(name,lv,hp);
    p1->ShowInfo();
    delete p1;
 
    cin >> name >> lv >> hp;
    Pokemon p2(name,lv,hp);
 
    Pokemon p3;
 
    p2.ShowInfo();
    p3.ShowInfo();
 
    return 0;
}

/**
 說明
 設計一個Pokemon類別包含下列成員：
 令物件實體不能存取其屬性
 使用Pokemon 類別宣告3個物件
 使用建構式建立其初始資料
 使用解構式在將其刪除前顯示刪除訊息
 新增建構式、重載建構與解構式式如下：


 屬性 (私有)：

 string Name: 名字
 int Lv: 等級
 int HpMax: 最大血量
 int HpCur: 現存血量 (HpCurrent)
 方法 (公開)：

 Pokemon() :建構式
 初始化 pokemon 為Name = No Name, Lv=1, Hp皆 = 1
 Pokemon(string name, ...): 重載建構式
 設定初化建構式，並檢查參數合理性，同setData
 ~Pokemon() :解構式
 於記憶體釋放時執行，並顯示 "xxx has returned to the nature."
 void ShowInfo(): 顯示資訊
 void Attack(Pokemon &Target): 攻擊(並判斷其合理性)
 若攻擊方或被攻擊方血量已歸0的話，便不能攻擊
 void Defence( int n ): 防御(並判斷其合理性)
 若被攻擊超過剩餘血量，使血量不可為負數，最低為0
 void Cure(): 治癒
 void setData(string name, int lv, int hp): 設定其資料 (並判斷其合理性)
 name不得為空、空白或是標點符號，若是須提示"Name can't be empty."並設定為"No Name"
 lv不得小於1，若小於1，須提示"Lv setting error."並設定為1
 hp不得小於1，若小於1，須提示"Hp setting error."並設定為1
 使用Pokemon 類別宣告兩個物件
 使兩物件可互相攻擊
 以 LV 當作攻擊力
 每次攻擊後扣除被攻擊方的血量
 以攻擊方的等級扣除被攻擊方的現在HP
 並印出它們的資訊

 本題為多檔組合 main.cpp 已幫你準備好如下：

 #include <iostream>
 #include "Pokemon.h"
  
 using namespace std;
  
 int main()
 {
  
     string name;
     int lv, hp;
  
     cin >> name >> lv >> hp;
     Pokemon *p1 = new Pokemon(name,lv,hp);
     p1->ShowInfo();
     delete p1;
  
     cin >> name >> lv >> hp;
     Pokemon p2(name,lv,hp);
  
     Pokemon p3;
  
     p2.ShowInfo();
     p3.ShowInfo();
  
     return 0;
 }
 請完成Pokemon.h

 //...
 class Pokemon
 {
 public:
     ...
 };
 請完成Pokemon.cpp

 void Pokemon::ShowInfo(){
     ...
 }
 ...
 完成後上傳

 Input Format
 名字1
 等級1
 血量1
 名字2
 等級2
 血量2

 Output Format
 動態 Pokemon 1 資訊
 手動釋放 Pokemon 1
 Pokemon 2資訊
 Pokemon 3資訊
 自動釋放 Pokemon 3
 自動釋放 Pokemon 2

 Sample Input 1
 1
 2
 3
 4
 5
 6
 Pikachu
 5
 30
 Mewtwo
 30
 300
 Sample Output 1
 1
 2
 3
 4
 5
 6
 7
 8
 9
 10
 11
 12
 13
 14
 15
 Name: Pikachu
 Lv: 5
 HP: 30/30
  
 Pikachu has returned to the nature.
 Name: Mewtwo
 Lv: 30
 HP: 300/300
  
 Name: No Name
 Lv: 1
 HP: 1/1
  
 No Name has returned to the nature.
 Mewtwo has returned to the nature.
 Sample Input 2
 1
 2
 3
 4
 5
 6
 Charmander
 90
 700
 Weedle
 -1
 -20
 Sample Output 2
 1
 2
 3
 4
 5
 6
 7
 8
 9
 10
 11
 12
 13
 14
 15
 16
 17
 Name: Charmander
 Lv: 90
 HP: 700/700
  
 Charmander has returned to the nature.
 Lv setting error.
 Hp setting error.
 Name: Weedle
 Lv: 1
 HP: 1/1
  
 Name: No Name
 Lv: 1
 HP: 1/1
  
 No Name has returned to the nature.
 Weedle has returned to the nature.

 */

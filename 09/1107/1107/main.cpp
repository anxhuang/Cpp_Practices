//
//  main.cpp
//  1107
//
//  Created by user on 2022/7/16.
//

#include <iostream>
#include <string>
#include "Pokemon.h"

using namespace std;
 
int main() {
    Pokemon p1,p2;
    string name;
    int lv, hp;
 
    cin >> name >> lv >> hp;
    p1.Name = name;
    p1.Lv = lv;
    p1.HpCur = p1.HpMax = hp;
 
    cin >> name >> lv >> hp;
    p2.Name = name;
    p2.Lv = lv;
    p2.HpCur = p2.HpMax = hp;
 
    p1.ShowInfo();
    p2.ShowInfo();
 
    return 0;
}

/**
 說明
 設計一個Pokemon類別包含下列成員：

 屬性 (公開)：

 string Name: 名字
 int Lv: 等級
 int HpMax: 最大血量
 int HpCur: 現存血量 (HpCurrent)
 方法 (公開)：

 ShowInfo(): 顯示資訊
 使用Pokemon 類別宣告兩個物件並印出它們的資訊

 本題為多檔組合 main.cpp 已幫你準備好如下：

 #include <iostream>
 #include "Pokemon.h"
 using namespace std;
  
 int main()
 {
     Pokemon p1,p2;
     string name;
     int lv, hp;
  
     cin >> name >> lv >> hp;
     p1.Name = name;
     p1.Lv = lv;
     p1.HpCur = p1.HpMax = hp;
  
     cin >> name >> lv >> hp;
     p2.Name = name;
     p2.Lv = lv;
     p2.HpCur = p2.HpMax = hp;
  
     p1.ShowInfo();
     p2.ShowInfo();
  
     return 0;
 }
 請完成Pokemon.h

 class Pokemon
 {
 public:
     void ShowInfo();
  
     ...
 };
 請完成Pokemon.cpp

 void Pokemon::ShowInfo(){
     ...
 }
 完成後上傳
 example file

 Input Format
 名字1
 等級1
 血量1(換行2次)

 名字2
 等級2
 血量2(換行2次)


 Output Format
 Pokemon 1資訊
 Pokemon 2資訊

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
 HP: 300/300
  
 Name: Pikachu
 Lv: 10
 HP: 50/50
  
 Hint
 每個.cpp檔都必須當作一獨立之程式，有用到任何的函式庫都必須使用#include 引用進來。
 .cpp檔之中有定義函式或是方法請務必引用其prototype(原型)所在的*.h標頭檔。
 若有用到cout、cin及string務必注意名稱空間std的問題。
 */

#include <stdio.h>

int main() {
    char c;
    do {
        scanf(" %c", &c);
        printf("%c\n", c);
    } while (c != 'q');
    return 0;
}

/**
 說明
 輸入鍵盤按鍵輸入一字元後，立即印出你所輸入的字元，直到輸入q後程式結束(q也要印出來)。

 Input Format
 字元1
 字元2
 ... q

 Output Format
 字元1
 字元2
 ... q

 Sample Input
 a
 d
 h
 d
 h
 j
 3
 5
 %
 ^
 #
 q
 
 Sample Output
 a
 d
 h
 d
 h
 j
 3
 5
 %
 ^
 #
 q
 
 Hint
 C語言的scanf
 由鍵盤讀入一字元至一字元變數中
 char c;
 scanf("%c",&c);
 請注意：如果 % 之前加一空格的話代表跳過所有空格 (TAB、 space、 及 Enter) 字元，例如：
  
 char c;
 scanf("　%c",&c);
 另外提醒，本題在實際練習中看見的會是輸入與輸出穿插在一起的樣子，例如:

 [input ]a
 [output]a
 [input ]b
 [output]b
 [input ]c
 [output]c
 [input ]q
 [output]q

 */

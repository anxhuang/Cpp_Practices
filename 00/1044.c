#include <stdio.h>

int main() {
    char c;
    scanf(" %c", &c);
    if (c >= '0' && c <= '9') {
        printf("%c is a number.", c);
    } else if (c >= 'A' && c <= 'Z') {
        printf("%c is a capital letter.", c);
    } else if (c >= 'a' && c <= 'z') {
        printf("%c is a lowercase letter.", c);
    } else {
        printf("%c is a punctuation.", c);
    }
    printf("\n");
    return 0;
}

/**
 說明
 使用者可以輸入一字元c，並讓程式判斷此字元是大寫或是小寫英文字母、數字或是其它標點符號。

 Input Format
 字元c

 Output Format
 判斷結果:
 x is a number.
 x is a capital letter.
 x is a lowercase letter.
 x is a punctuation.

 Sample Input
 G
 Sample Output
 G is a capital letter.
 
 Hint
 C語言的scanf
 由鍵盤讀入一字元至一字元變數中
 char c;
 scanf("%c",&c);
 請注意：如果 % 之前加一空格的話代表跳過所有空格 (TAB、 space、 及 Enter) 字元，例如：
  
 char c;
 scanf("　%c",&c);
 */

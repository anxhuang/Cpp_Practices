#include <stdio.h>

int main() {
    char c;
    scanf(" %c", &c);
    if (c > 47 && c < 58) {
        printf("%c is a number.\n", c);
    } else if (c > 64 && c < 91) {
        printf("%c is a capital letter.\n", c);
    } else if (c > 96 && c < 123) {
        printf("%c is a lowercase letter.\n", c);
        printf("swap to capital letter %c.\n", c - 32);
    } else {
        printf("%c is a punctuation.\n", c);
    }
    return 0;
}

/**
 說明
 使用者可以輸入一字元並讓程式判斷此字元是大寫或是小寫英文字母、數字或是其它標點符號。
 如果使用者輸入的是小寫英文字母的話，就將其轉大寫後輸出為swap to capital letter X.

 Input Format
 字元

 Output Format
 判斷結果
 x is a number.
 x is a capital letter.
 x is a punctuation.

 x is a lowercase letter.
 swap to capital letter X.


 Sample Input 1
 G
 Sample Output 1
 G is a capital letter.
 Sample Input 2
 q
 Sample Output 2
 q is a lowercase letter.
 swap to capital letter Q.
 
 Hint
 C語言的scanf
 由鍵盤讀入一字元至一字元變數中
 char c;
 scanf("%c",&c);
 請注意：如果 % 之前加一空格的話代表跳過所有空格 (TAB、 space、 及 Enter) 字元，例如：
  
 char c;
 scanf("　%c",&c);

 */

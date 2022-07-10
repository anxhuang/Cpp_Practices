#include <stdio.h>

int main() {
    double a;
    double b;
    char operator;
    double result = 0;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf(" %c", &operator);
    switch (operator) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            printf("undefined operator");
            return 0;
    }
    printf("%.2lf %c %.2lf = %.2f\n", a, operator, b, result);
    return 0;
}

/**
 說明
 製作一個簡單的計算機
 功能

 連續輸入兩個數字，以空白鍵或換行分開
 再輸入＋,－,＊,／ 任一鍵(不需要判斷除以0之情況)
 按下Enter後算出結果 (顯示小數點後兩位)

 Input Format
 數字1
 數字2
 運算符號

 Output Format
 輸出結果

 Sample Input
 5.1
 2.3
 /
 
 Sample Output
 5.10 / 2.30 = 2.22
 
 Hint
 C語言的scanf
 由鍵盤讀入一字元至一字元變數中
 char c;
 scanf("%c",&c);
 請注意：如果在此行之前有別的輸入，會造成「\n」殘留，讓輸入「字元」變成「\n」
 在 % 之前加一空格，可解決代表跳過所有空格 (TAB、 space、 及 Enter) 字元，例如：
 char c;
 scanf("　%c",&c);
 
 There is no switch-case in python. Please use if-else.
 */

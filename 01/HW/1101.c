#include <stdio.h>

int main() {
    double a;
    double b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    printf("%.2f * %.2f = %.2f\n", a, b, a * b);
    printf("%.2f / %.2f = %.2f\n", a, b, a / b);
    return 0;
}

/**
 說明
 製作一個簡單的計算機
 令使用者可以連續輸入兩個整數，以空白鍵分開
 按下Enter後算出結果 (顯示小數點後兩位)
 輸出這兩個數字做＋,－,＊,／ 後的結果(不需要判斷除以0之情況)
 輸入輸出格式 (格式必須與下面程式結果一致)

 Input Format
 數字1
 數字2

 Output Format
 輸出結果

 Sample Input
 5.1
 2.3
 
 Sample Output
 5.10 + 2.30 = 7.40
 5.10 - 2.30 = 2.80
 5.10 * 2.30 = 11.73
 5.10 / 2.30 = 2.22
 
 */

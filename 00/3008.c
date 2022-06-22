#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int i;
    int sum = 0;
    for(i=1; i<=n; i++) {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}

/**
 小練習 說明
 請撰寫一程式，可以令使用者輸入一大於0的整數n
 算出1加到n的結果

 Input Format
 數字n

 Output Format
 1加到 n 的總和

 Sample Input
 5
 
 Sample Output
 15

 */

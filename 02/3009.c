#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int i;
    for(i=n-1; i>0; i--) {
        n *= i;
    }
    printf("%d\n", n);
    return 0;
}

/**
 小練習 說明
 請撰寫一程式，可以令使用者輸入一整數n
 算出n階乘的結果

 Input Format
 數字n

 Output Format
 1乘到 n 的總和

 Sample Input
 5
 
 Sample Output
 120
 */

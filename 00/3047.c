#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/**
 說明
 請撰寫一程式，可以令使用者輸入一整數n
 並印出一n*n之*號方塊

 Input Format
 數字n

 Output Format
 長寬為n的*號方塊(每個*號後含一空白)

 Sample Input
 5
 
 Sample Output
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *

 */

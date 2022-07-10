#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int i;
    for(i=1; i<=n; i++) {
        printf("%d\n", i);
    }
    for(i=n-1; i>0; i--) {
        printf("%d\n", i);
    }
    return 0;
}

/**
 Task Description
 編寫一個程序以讀取正整數N，然後印出2n-1個整數序列，從1到n開始，然後從n-1到1。
 
 Input Format
 輸入中有一行。第一為整數n。
 
 Output Format
 輸出中有2n-1行。

 Sample Input
 5
 
 Sample Output
 1
 2
 3
 4
 5
 4
 3
 2
 1
 */

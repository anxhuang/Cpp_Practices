#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", num / 100);
    printf("%d\n", num / 10 % 10);
    printf("%d\n", num % 10);
    return 0;
}

/**
 Task Description
 請撰寫一程式可以令使用者輸入一介於 100~999之間的數字，並於每一行之中單獨輸出每一位數字，共三行，每一行結尾都要加換行符號，且無空白穿插其中。
 
 Input Format
 一行介於 100~999之間的數字
 
 Output Format
 有三行輸出，每行之中都是一個數字。

 Sample Input
 123
 
 Sample Output
 1
 2
 3
 */

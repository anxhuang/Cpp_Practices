#include <stdio.h>

int main() {
    int value;
    scanf("%d", &value);
    int sum = 0;
    for (int i = 4; i > 0; i--) {
        sum += value % 10;
        value /= 10;
    }
    printf("%d\n", sum);
    return 0;
}


/**
 說明
 請撰寫一程式，令使用者可以輸入一4位數的數字N，並將每一位的數字加總後印出，例如： 輸入為 1234 答案為 1+2+3+4 => 10

 Input Format
 一個整數N，範圍為 999<N<10000

 Output Format
 一個整數(含換行)

 Sample Input
 1234
 
 Sample Output
 10
 */

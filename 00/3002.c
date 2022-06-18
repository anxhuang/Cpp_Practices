#include <stdio.h>

int main() {
    int top;
    int base;
    int height;
    scanf("%d", &top);
    scanf("%d", &base);
    scanf("%d", &height);
    double area = (top + base) * height / 2.0;
    printf("%.1f\n", area);
    return 0;
}

/**
 說明

 請撰寫一程式令使用者可依序輸入上底、下底、高
 並算出梯型面積，且輸出計算結果

 Input Format
 上底(整數)
 下底(整數)
 高(整數)

 Output Format
 輸出結果 (僅顯示小數點後一位)

 Sample Input
 10
 15
 7

 Sample Output
 87.5

 Hint
 如果是使用C語言的，請輸出到小數點後第1位ex:77.5
 不要列印其它多餘的東西，例如輸入提示等。
 
 */

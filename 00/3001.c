#include <stdio.h>

int main() {
    int top = 10;
    int base = 15;
    int height = 7;
    double area = (top + base) * height / 2.0;
    printf("%.1f", area);
    return 0;
}

/**
 說明

 請算出此梯型面積
 上底：10cm
 下底：15cm
 高：7cm

 Input Format
 沒有輸入

 Output Format
 輸出結果

 Sample Input
  
 Sample Output
 15 (此答案為示意用，非答案)
 
 Hint
 如果是使用C語言的，請輸出到小數點後第1位ex:77.5
 */

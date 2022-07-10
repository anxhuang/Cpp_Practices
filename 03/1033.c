#include <stdio.h>
#define CLASSES 2
#define STUDENTS 3

int main() {
    int arr[CLASSES][STUDENTS];
    int i;
    int j;
    int sum = 0;
    int total = 0;
    
    for (i=0; i<CLASSES; i++) {
        for (j=0; j<STUDENTS; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    for (i=0; i<CLASSES; i++) {
        printf("class %d\n", i + 1);
        sum = 0;
        for (j=0; j<STUDENTS; j++) {
            printf(" %d: %d\n", j+1, arr[i][j]);
            sum += arr[i][j];
        }
        total += sum;
        printf(" sum: %d\n", sum);
        printf(" avg: %.2lf\n", sum / (double)STUDENTS);
    }
    printf("total: %d, avg: %.2lf\n", total, total / (double)(CLASSES * STUDENTS));
    return 0;
}

/**
 說明
 輸入兩班上3位同學分數後
 印出各班總分、平均
 及全校總分、平均

 Input Format
 班1成績1 成績2 成績3
 班2成績1 成績2 成績3

 Output Format
 班1
 成績1 成績2 成績3
 班總分
 班平均
 班2
 成績1 成績2 成績3
 班總分
 班平均
 校總分 校平均(含換行)

 Sample Input
 70 80 90
 50 60 70
 
 Sample Output
 class 1
  1: 70
  2: 80
  3: 90
  sum: 240
  avg: 80.00
 class 2
  1: 50
  2: 60
  3: 70
  sum: 180
  avg: 60.00
 total: 420, avg: 70.00
 
 Hint
 注意空格和輸出的縮排
 */

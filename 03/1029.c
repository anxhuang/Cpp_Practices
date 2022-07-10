#include <stdio.h>
#define STUDENT 3

int main() {
    
    int arr[STUDENT];
    double sum = 0.0;
    for (int i=0; i<STUDENT; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("avg = %.2lf\nfail:\n", sum / (double)STUDENT);
    for (int i=0; i<STUDENT; i++) {
        if (arr[i] < 60) {
            printf("%d: %d\n", i+1, arr[i]);
        }
    }
    return 0;
}

/**
 說明
 輸入班上3位同學分數, 求出它們的平均值
 印出不及格的同學之號碼與分數(若無不及格的同學也會印出fail:)

 Input Format
 整數1 整數2 整數3

 Output Format
 分數平均
 不及格的同學之號碼與分數

 Sample Input
 40 60 50
 
 Sample Output
 avg = 50.00
 fail:
 1: 40
 3: 50

 */

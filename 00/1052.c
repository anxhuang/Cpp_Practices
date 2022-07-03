#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int STUDENT;
    scanf("%d", &STUDENT);
    int *ptr = (int*)malloc(sizeof(int) * STUDENT);

    double avg = 0.0;
    int highestIdx = 0;
    for (int i=0; i<STUDENT; i++) {
        scanf("%d", &ptr[i]);
        avg += (double)ptr[i] / (double)STUDENT;
        if (ptr[highestIdx] < ptr[i]) {
            highestIdx = i;
        }
    }
    printf("avg = %.2lf\nfail:\n", avg);
    for (int i=0; i<STUDENT; i++) {
        if (ptr[i] < 60) {
            printf("%d: %d\n", i+1, ptr[i]);
        }
    }
    printf("highest:\n%d: %d\n", highestIdx+1, ptr[highestIdx]);
    
    free(ptr);
    ptr = NULL;
    
    return 0;
}

/**
 說明
 使用者先輸入一班有幾個學生N，再一一輸入學生的考試成績scores (0<=scores<=50000)
 求出它們的平均值
 印出不及格的同學之號碼與分數(若無不及格的同學也會印出fail:)
 印出其中最高分同學之分數 (若有多筆最高分同分者，請列出索引值最小的)

 Input Format
 第一行為幾個學生N(3<=N<=600000)
 第二行為學生分數，有N個，中間以空白間隔，EX: 整數1 整數2 整數3 ... 整數N

 Output Format
 第一行為分數平均，印出到小數點後2位(四捨五入)
 第二行開始為fail:下一行列印不及格的同學之號碼與分數(冒號之後有一空格)
 之後印出highest:下一行印出最高分同學之號碼與分數(冒號之後有一空格)

 Sample Input
 3
 40 60 50
 
 Sample Output
 avg = 50.00
 fail:
 1: 40
 3: 50
 highest:
 2: 60
 
 Hint
 注意各班資料的縮排(空白)
 C/C++答題注意：

 請用動態記憶體配置，否則無法通過本題
 最後一筆測資若是直接加總會超過整數的範圍
 所以要算平均的話可先讓分數除以總學生人數後再加總
 注意資料型態空間夠大，並盡量縮小誤差

 */

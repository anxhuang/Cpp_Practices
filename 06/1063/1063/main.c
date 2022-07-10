//
//  main.c
//  1063
//
//  Created by user on 2022/7/3.
//

#include <stdio.h>

#include "score.h"

int main() {
    int n;
    scanf("%d", &n);

    int *ptr = (int*)malloc(sizeof(int) * n);
    
    inputAry(n, ptr);
//    printAry(n, ptr);
    printf("avg = %.2lf\n", Avg(n, ptr));
    int idx = MaxScore(n, ptr);
    printf("highest:\n%d: %d\n", idx+1, ptr[idx]);
    
    free(ptr);
    ptr = NULL;
    
    return 0;
}

/**
 說明
 請撰寫一程式，令使用者輸入班上人數N
 使用動態記憶體配置
 及各位同學分數, 求出它們的平均值
 印出其中最高分同學之分數

 score.h內容
 // score.h
 void inputAry(int n, int *P);
 void printAry(int n, int *P);
 double Avg(int n, int *P);
 int MaxScore(int n, int *P);
 
 Input Format
 第一行是人數N (1<=N<=60000)
 第二行是N個分數:整數1 整數2 ... 整數n

 Output Format
 分數平均
 最高分同學之號碼(從1起算)與分數，若有多個請印出第一個

 Sample Input
 3
 40 60 50
 
 Sample Output
 avg = 50.00
 highest:
 2: 60
 */

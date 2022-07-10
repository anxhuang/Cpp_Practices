#include <stdio.h>

int main() {
    int A[5];
    int *P = A;
    int maxIdx = 0;
    for(int i=0; i<5; i++) {
        scanf("%d", P+i);
        if (*(P+maxIdx) < *(P+i)) {
            maxIdx = i;
        }
    }
    printf("%d: %d\n", maxIdx + 1, *(P+maxIdx));
    return 0;
}

/**
 說明
 宣告一陣列A，長度為5
 使用一指標P存取此陣列 ex:「*(P+i)」
 讓使用者輸入5個數字，並找到最大值與最大值的位置

 Input Format
 整數1 整數2 整數3 整數4 整數5

 Output Format
 最大值的位置(從1起算)與值

 Sample Input
 40 60 50 10 20
 
 Sample Output
 2: 60
 */

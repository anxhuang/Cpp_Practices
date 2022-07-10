#include <stdio.h>
#define N 5

int main() {
    int arr[N];
    int i;
    int j;
    int tmp;

    for (i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }

    for (i=0; i<N-1; i++) {
        for (j=0; j<N-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    for (i=0; i<N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

/**
 說明
 輸入五個整數, 印出從小到大的結果
 例如：
 輸入：34 12 5 66 1
 輸出：1 5 12 34 66 (每個數字後都須加一空白)

 Input Format
 整數1 整數2 整數3 整數4 整數5

 Output Format
 順序印出(每個數字後都須加一空白，印完換行)

 Sample Input
 34 12 5 66 1
 
 Sample Output
 1 5 12 34 66
 */

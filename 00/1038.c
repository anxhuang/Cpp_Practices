#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=n-1; i>0; i--) {
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[0]);
    return 0;
}

/**
 Task Description
 編寫一個程序來讀取正整數N和N個整數的序列，然後反向打印序列。 限制N不超過1000。
 
 Input Format
 輸入中有兩行。第一行為一整數N。第二行有N個整數。
 
 Output Format
 輸出中有一行，為一根據描述的反向序列，每個數字間以一空白間隔，最後無空白。
 
 Sample Input
 5
 1 4 8 9 10
 
 Sample Output
 10 9 8 4 1
 
 特別注意
 若在行尾輸出 多餘的空白字元，你將會得到 Wrong Answer
 */

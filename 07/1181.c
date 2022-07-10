#include <stdio.h>

int main() {
    
    char filename[80];
    scanf("%s", filename);
    FILE *f = fopen(filename, "w");

    int N;
    int num;
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &num);
        fprintf(f, "%d ", num);
    }
    fclose(f);
    
    return 0;
}

/**
 Task Description
 請撰寫一程式令使用者可以輸入N個數字，並寫入至指定檔名的txt檔案。

 Input Format
 第一行為要寫入的檔案名稱
 第二行為即將輸入的數字個數N 第三行為輸數的整數，中間以空白間隔
 
 Output Format
 無標準輸出
 
 Output File Format
 僅一行為數列，每個數字後含一空白
 
 Sample Input
 0.txt
 5
 11 22 33 44 55
 
 Sample Output
  
 Sample Output Text File 0.txt
 11 22 33 44 55

 */

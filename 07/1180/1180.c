#include <stdio.h>

int main() {
    char filename[80];
    scanf("%s", filename);
    
    FILE *f = fopen(filename, "r");

    int num;
    int i = 0;
    int total = 0;
    
    while (!feof(f)) {
        fscanf(f, " %d ", &num);
        i += 1;
        total += num;
        printf("%d ", num);
    }
    fclose(f);
    
    printf("\n%d\n", total);
    printf("%.2lf\n", (double)total / (double)i);
    
    return 0;
}

/**
 Task Description
 請撰寫一程式令使用者可以輸入txt檔案的名稱後，可讀入相同資料夾裡的txt檔，txt檔的內容為整數數列，中間以空白間隔，但是最後的結尾有的有空白，有的沒有，有的有換行，有的沒有，請讀入此文字檔中的數字，並印出此數列，和計算其加總和平均。
 文字檔範例如下：

 11 22 33 44 55
 範例文字檔下載

 Input Format
 僅一行檔案名稱
 
 Output Format
 有三行
 第一行為數列，每個數字後含一空白
 第二行為數列的加總，後方無空白
 第三行為數列的平均，印出到小數點後2位，後方無空白

 Sample Input
 0.txt
 
 Sample Text File 0.txt
 11 22 33 44 55
  
 Sample Output
 11 22 33 44 55
 165
 33.00
 */

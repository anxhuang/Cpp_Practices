#include <stdio.h>

int main() {
    char filename[80];
    scanf("%s", filename);
    
    FILE *fr = fopen(filename, "r");
    filename[0] = 'w';
    FILE *fw = fopen(filename, "w");

    int num;
    int i = 0;
    int total = 0;
    
    while (!feof(fr)) {
        fscanf(fr, " %d ", &num);
        i += 1;
        total += num;
        fprintf(fw, "%d ", num);
    }
    fclose(fr);
    
    fprintf(fw, "\n%d\n", total);
    double avg = (double)total / (double)i;
    fprintf(fw, "%.2lf\n", avg);
    fclose(fw);
    
    printf("%d\n", total);
    printf("%.2lf\n", avg);
    
    return 0;
}

/**
 Task Description
 請撰寫一程式令使用者可以輸入txt檔案的名稱後，可讀入相同資料夾裡的txt檔，txt檔的內容為整數數列，中間以空白間隔，但是最後的結尾有的有空白，有的沒有，有的有換行，有的沒有，請讀入此文字檔中的數字，並輸出此數列到文字檔，和計算其加總和平均並輸出至文字檔，請將讀入文字檔的第一個字元改成'w'作為寫入的檔案名稱，例如，讀取r01.txt就寫入w01.txt，並印出此數列的加總和平均。
 讀取文字檔範例如下：

 11 22 33 44 55
 範例文字檔下載

 Input Format
 僅一行檔案名稱
 
 Output Format
 有二行
 第一行為數列的加總，後方無空白
 第二行為數列的平均，印出到小數點後2位，後方無空白
 
 Output File Format
 有三行
 第一行為數列，每個數字後含一空白
 第二行為數列的加總，後方無空白
 第三行為數列的平均，印出到小數點後2位，後方無空白
 
 Sample Input
 r0.txt
 
 Sample Read Text File r0.txt
 11 22 33 44 55
  
 Sample Output
 165
 33.00
 
 Sample Output Text File w0.txt
 11 22 33 44 55
 165
 33.00

 */

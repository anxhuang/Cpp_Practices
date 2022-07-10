#include <stdio.h>

int main() {
    char filename[80];
    scanf("%s", filename);
    
    FILE *f = fopen(filename, "r");
    char ch;
    while (1) {
        fscanf(f, "%c", &ch);
        if (feof(f)) {
            break;
        }
        printf("%c", ch);
    }
    fclose(f);
    
    return 0;
}

/**
 說明
 輸入一個字串表示檔案的名字。例如 x.txt(檔名之中不會有空白)
 從 x.txt 文字檔中讀一字串到str
 再將其所讀到的字串列印出來
 文字檔中有可能會有空白及換行字元。 如下

 asdfqwer 1234#%^&*(
 apple banana
 Input Format
 輸入一個字串表示檔案的名字。例如 0.txt

 Output Format
 文字檔內容

 Sample Input
 0.txt
 
 Sample Output
 asdfqwer 1234#%^&*(
 apple banana
 
 Hint
 讀檔的路徑為相對目錄中與執行檔的同一資料夾
 輸出到螢幕上的字串，最後無空白字元(除非檔案裡有)
 */

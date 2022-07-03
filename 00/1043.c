#include <stdio.h>
#include <string.h>
#define LENGTH 100

int main() {
    char str1[LENGTH];
    char str2[LENGTH];
    gets(str1);
    gets(str2);
    
    int result = strcmp(str1, str2);
    if (result > 0) {
        printf("1>2\n");
    } else if (result < 0) {
        printf("1<2\n");
    } else {
        printf("1==2\n");
    }
    strcat(str1, str2);
    printf("%s\n%lu\n", str1, strlen(str1));
    return 0;
}

/**
 說明
 使用者可以輸入二字串
 比較這兩字串文字的大小(ex:"cde">"abc") ※注意，並非比較字串長度
 將此二字串連接起來後輸出
 並計算連接後的字串長度

 Input Format
 字串一
 字串二

 Output Format
 比較：1>2、1==2、1<2
 二字串連接後輸出
 連接後的字串長度 (不含換行)

 Sample Input
 Hi,_
 how are you
 
 Sample Output
 1<2
 Hi,_how are you
 15

 */

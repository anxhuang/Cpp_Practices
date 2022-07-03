#include <stdio.h>
#define LENGTH 100

int main() {
    char str[LENGTH];
    char c;
    gets(str);
    
    for(int i=0; i<LENGTH; i++) {
        c = str[i];
        if (c == '\0') {
            break;
        } else if (c >= 'a' && c <= 'z') {
            printf("%c", c - 32);
        } else {
            printf("%c", c);
        }
    }
    printf("\n");
    return 0;
}

/**
 說明
 輸入一字串將其中小寫字串轉成大寫字串
 例如:
 輸入abCdE123
 輸出ABCDE123

 Input Format
 字串(可含空白)

 Output Format
 轉大寫後的字串(無換行)

 Sample Input
 abCdE123
 
 Sample Output
 ABCDE123

 */

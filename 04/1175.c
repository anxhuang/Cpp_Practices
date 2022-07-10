#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int i;
    int j;
    scanf("%d", &n);
    char words[n][128];
    char temp[128];
    
    for (i=0; i<n; i++) {
        scanf("%s", words[i]);
        // Bubble Sort
        for (j=i; j>0; j--) {
            if (strcmp(words[j], words[j-1]) < 0) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j-1]);
                strcpy(words[j-1], temp);
            }
        }
    }
    for (i=0; i<n; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");
    return 0;
}

/**
 說明
 請撰寫一程式，令使用者輸入一數字N代表接下來要輸入N個字串，每個字串長度小於128。
 請在使用者輸入字串後，將其排序印出，其排序規則為依每個字串的首字母的ACSII Code排序，若第一個字母相同，則依第二個做為排序的依據，若是第二個字母仍相同，再比下一個依此類推！

 Input Format
 第一行為一整數N，代表字串個數
 第二行為字串 1到n，中間以空白間隔。

 Output Format
 輸出有N個字串，依規則由小到大印出，每個字串後含一空白。

 Input Example
 5
 dog cat banana apple pineapple
 
 Output Example
 apple banana cat dog pineapple
 */

#include <stdio.h>

int main() {
    char answer[5];
    char guess[5];
    int a = 0;
    int b = 0;
    int i;
    int j;
    scanf("%s", answer);
    while (a < 4) {
        scanf("%s", guess);
        a = 0;
        b = 0;
        for (i=0; i<4; i++) {
            if (guess[i] == answer[i]) {
                a += 1;
                continue;
            }
            for (j=0; j<4; j++) {
                if (guess[i] == answer[j]) {
                    b += 1;
                }
            }
        }
        printf("%dA%dB\n", a, b);
    }
    printf("You Win!\n");
    return 0;
}

/**
 說明
 輸入四位不重覆數字 (0~9), 做為電腦的題目
 輸入四位不重覆數字 (0~9), 做為您猜的答案
 不需檢查使用者輸入之格式
 當輸入之答案與題目相同, 程式結束(輸出：You Win!)
 遊戲規則
 電腦的題目: 1234 您猜的數字: 5283
 結果為 1A1B 表示您共猜對了兩位數，其中有一個字位置對，另一個字位置不對
 其中，A 表示猜對一個字且位置也對，B 表示猜對一個字但是位置不對。

 (上圖為示意，不用輸出Please enter guess，格式以sample為準)
 Input Format
 四位數字的答案
 四位數字猜的數字.....
 四位數字猜的數字.....
 四位數字猜的數字.....

 Output Format
 幾A幾B

 Sample Input
 1234
 1324
 1564
 1111
 8146
 9999
 1234
 
 Sample Output
 2A2B
 2A0B
 1A0B
 0A2B
 0A0B
 4A0B
 You Win!
 
 Hint
 理論上不應出現重覆的數字，但若使用者做了錯誤的輸入，請增加容錯的機制，使程式可以正確的判讀

*/

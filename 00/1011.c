#include <stdio.h>

int main() {
    int role;
    int score;
    scanf("%d", &role);
    scanf("%d", &score);
    if (role == 1 && score >= 60) {
        printf("pass\n");
    } else if (role == 2 && score >= 70) {
        printf("pass\n");
    } else {
        printf("fail\n");
    }
    return 0;
}

/**
 說明
 寫個程式，判斷一個人的成績是否及格 (大學部及格分數為60分，研究所為70分)
 令使用者輸入他的學藉及成績用數字表示學藉：

 (1)大學部(2)研究所，並判斷其成績是否及格

 Input Format
 學藉：(1)大學部 (2)研究所
 成績 (0<=score<=100)

 Output Format
 pass或fail

 Sample Input
 2
 69
 
 Sample Output
 fail

 */

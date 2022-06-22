#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);
    printf(score >= 60 ? "pass\n" : "fail\n");
    return 0;
}

/**
 說明
 令使用者輸入一整數score為成績(0≤score≤100)
 並判斷其成績是否及格(60分及格)
 及格的話請輸出pass
 不及格的話請輸出fail

 Input Format
 成績

 Output Format
 pass或fail

 Sample Input
 60
 
 Sample Output
 pass
 
 Hint
 注意英文字母的大小寫(本題第一個字皆為小寫)
 請不要輸出輸入的說明文字
 */

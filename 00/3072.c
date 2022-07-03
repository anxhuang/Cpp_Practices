#include <stdio.h>

int fact(int n);
int P(int n, int m);
int C(int n, int m);

int main() {
    int n;
    int m;
    scanf("%d", &n);
    scanf("%d", &m);
    printf("%d\n", C(n, m));
    return 0;
}

int fact(int n) {
    int total = 1;
    for (int i=1; i<=n; i++) {
        total *= i;
    }
    return total;
}

int P(int n, int m) {
    return fact(n) / fact(n - m);
}

int C(int n, int m) {
    return P(n, m) / fact(m);
}

/**
 說明
 排列組合應用
 從n個相異物中不重覆取出m個之組合數
 定義一函式為C(n,m)並回傳一整數
 Python:
 def C(n,m):
 C/C++:
 int C(int n, int m);

 公式如下： Cmn=nCm=(nm)=nPmm!=n!m!(n−m)!
 Input Format
 n
 m

 Output Format
 組合數

 Sample Input
 10
 2
 
 Sample Output
 45
 
 Hint
 ※函式的設計(名稱、傳入參數個數與回傳值)務必要和題目相同，否則將有可能無法通過批改！
 */

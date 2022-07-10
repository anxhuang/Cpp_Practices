#include <stdio.h>

int fact(int n);
void return2num(int n, int *factRst, int *sumRst);

int main() {
    int n;
    int fact;
    int sum;
    scanf("%d", &n);
    
    return2num(n, &fact, &sum);

    printf("%d\n%d\n", fact, sum);
    return 0;
}

int fact(int n) {
    int total = 1;
    for (int i=1; i<=n; i++) {
        total *= i;
    }
    return total;
}

void return2num(int n, int *factRst, int *sumRst) {
    *factRst = fact(n);
    *sumRst = (1+n)*n/2;
}

/**
 說明
 請試寫一function 可同時回傳 n! 與 Σ 1~n
 並改成即使呼叫時不加入引數也不會錯誤(令n為0)
 python: def return2num(n=0)並回傳一tuple，此tuple中有兩個整數分別為n階與1加到n的結果。
 C/C++: void return2num(int n, int *factRst, int *sumRst);

 Input Format
 一整數n(0<=n<=10)

 Output Format
 第一行是一整數，為n!的計算結果
 第二行是一整數，為Σ 1~n的計算結果

 Sample Input
 5
 
 Sample Output
 120
 15
 
 Hint
 若n為0時
 1加到n 結果為 0
 n! 結果為 1
 Python函式的回傳值順序須和題目要求一致，階乘的結果為回傳值的位置[0]，累加的結果為回傳值的位置[1]
 ※Python函式的設計(名稱、傳入參數個數與回傳值)務必要和題目相同，否則將有可能無法通過批改！
 */

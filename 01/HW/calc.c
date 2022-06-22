#include <stdio.h>

int main() {
    double a;
    double b;
    printf("請輸入兩個數字: ");
    scanf("%lf", &a);
    scanf("%lf", &b);
    printf("計算結果:\n");
    printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    printf("%.2f * %.2f = %.2f\n", a, b, a * b);
    printf("%.2f / %.2f = %.2f\n", a, b, a / b);
    return 0;
}

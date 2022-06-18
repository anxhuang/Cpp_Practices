#include <stdio.h>

int main() {
    double a;
    double b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    printf("%.2f * %.2f = %.2f\n", a, b, a * b);
    printf("%.2f / %.2f = %.2f\n", a, b, a / b);
    return 0;
}

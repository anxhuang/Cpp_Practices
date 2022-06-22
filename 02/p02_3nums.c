#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf(a > b && a > c ? "True\n" : "False\n");
    printf(a < b && a < c ? "True\n" : "False\n");
    printf(a < b || a < c ? "True\n" : "False\n");
    printf(a > b || a > c ? "True\n" : "False\n");
    return 0;
}

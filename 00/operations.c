#include <stdio.h>

int main() {
    int a = 0;
    int b;
    
    printf("\n===DECIMAL OPERATIONS===\n");
    a = 10;
    printf("a = %d;\n", a);
    b = a + 2;
    printf("b = a + 2; b: %d\n", b);
    b = a - 2;
    printf("b = a - 2; b: %d\n", b);
    b = a * 2;
    printf("b = a * 2; b: %d\n", b);
    b = a / 2;
    printf("b = a / 2; b: %d\n", b);
    b = a % 2;
    printf("b = a %% 2; b: %d\n", b);
    
    printf("\n===BINARY OPERATIONS===\n");
    a = 4;
    printf("a = %d;\n", a);
    
    // AND &
    b = a & 2;
    printf("b = a & 2; b: %d\n", b);
    
    // OR |
    b = a | 7;
    printf("b = a | 7; b: %d\n", b);
    
    // XOR ^
    b = a ^ 7;
    printf("b = a ^ 7; b: %d\n", b);
    
    // SHIFT <<
    b = a << 1;
    printf("b = a << 1; b: %d\n", b);
    
    // SHIFT >>
    b = a >> 1;
    printf("b = a >> 1; b: %d\n", b);
    
    printf("\n===用自己修改自己的 OPERATIONS===\n");
    a = 10;
    printf("a = %d;\n", a);
    a += 2;
    printf("a += 2; a: %d\n", a);
    a -= 2;
    printf("a -= 2; a: %d\n", a);
    a *= 2;
    printf("a *= 2; a: %d\n", a);
    a /= 2;
    printf("a /= 2; a: %d\n", a);
    a %= 2;
    printf("a %%= 2; a: %d\n\n", a);
    
    a = 4;
    printf("a = %d;\n", a);
    a &= 5;
    printf("a &= 5; a: %d\n", a);
    a |= 2;
    printf("a |= 2; a: %d\n", a);
    a ^= 2;
    printf("a ^= 2; a: %d\n", a);
    a <<= 2;
    printf("a <<= 2; a: %d\n", a);
    a >>= 2;
    printf("a >>= 2; a: %d\n", a);
    
    printf("\n===SPECIAL OPERATIONS===\n");
    
    a = 10;
    printf("a = %d;\n", a);
    b = a++;
    printf("b = a++; a: %d\t, b: %d\n\n", a, b);
    
    a = 10;
    printf("a = %d;\n", a);
    b = ++a;
    printf("b = ++a; a: %d\t, b: %d\n\n", a, b);
    
    a = 10;
    printf("a = %d;\n", a);
    b = a--;
    printf("b = a--; a: %d\t, b: %d\n\n", a, b);
    
    a = 10;
    printf("a = %d;\n", a);
    b = --a;
    printf("b = --a; a: %d\t, b: %d\n\n", a, b);
    
    return 0;
}

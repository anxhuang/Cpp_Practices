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

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

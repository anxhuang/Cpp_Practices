#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n < 1 || n > 99999) {
        printf("out of range\n");
        return 0;
    }
    
    char numbers[11][4] = {
        {"零"},
        {"壹"},
        {"貳"},
        {"參"},
        {"肆"},
        {"伍"},
        {"陸"},
        {"柒"},
        {"捌"},
        {"玖"}
    };
    char units[6][4] = {
        {"萬"},
        {"仟"},
        {"佰"},
        {"拾"},
        {""}
    };
    
    int divider = 10000;
    int r;
    for(int i=0; i<5; i++) {
        r = (n / divider) % 10;
        divider /= 10;
        if (r == 0) {
            continue;
        }
        printf("%s%s", numbers[r], units[i]);
    }
    printf("元整\n");
    return 0;
}

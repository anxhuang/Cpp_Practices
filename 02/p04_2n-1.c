#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int i;
    for(i=1; i<=n; i++) {
        printf("%d\n", i);
    }
    for(i=n-1; i>0; i--) {
        printf("%d\n", i);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int STUDENT;
    scanf("%d", &STUDENT);
    int *ptr = (int*)malloc(sizeof(int) * STUDENT);

    double avg = 0.0;
    int highestIdx = 0;
    for (int i=0; i<STUDENT; i++) {
        scanf("%d", &ptr[i]);
        avg += (double)ptr[i] / (double)STUDENT;
        if (ptr[highestIdx] < ptr[i]) {
            highestIdx = i;
        }
    }
    printf("avg = %.2lf\nfail:\n", avg);
    for (int i=0; i<STUDENT; i++) {
        if (ptr[i] < 60) {
            printf("%d: %d\n", i+1, ptr[i]);
        }
    }
    printf("highest:\n%d: %d\n", highestIdx+1, ptr[highestIdx]);
    
    free(ptr);
    ptr = NULL;
    
    return 0;
}

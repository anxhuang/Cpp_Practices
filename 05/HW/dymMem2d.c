#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int j;
    
    int m;
    int n;
    scanf("%d", &m);
    scanf("%d", &n);
    
    int **arr = (int**)malloc(sizeof(int*) * m);
    for (i=0; i<m; i++) {
      arr[i] = (int*)malloc(sizeof(int) * n);
    }
    
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    double avg = 0;
    double avgs = 0;
    
    for (i=0; i<m; i++) {
        avg = 0;
        printf("class %d\n", i+1);
        for (j=0; j<n; j++) {
            printf(" %d: %d\n", j+1, arr[i][j]);
            avg += (double)arr[i][j] / (double)n;
        }
        avgs += avg;
        printf(" avg: %.2lf\n", avg);
    }
    printf("avg: %.2lf\n", avgs / (double)(m));
    
    for (i=0; i<m; i++) {
        free(arr[i]);
    }
    free(arr);
    
    return 0;
}

//
//  score.c
//  1063
//
//  Created by user on 2022/7/3.
//

#include "score.h"

void inputAry(int n, int *P) {
    for (int i=0; i<n; i++) {
        scanf("%d", &P[i]);
    }
}

void printAry(int n, int *P) {
    for (int i=0; i<n; i++) {
        printf("%d ", P[i]);
    }
}

double Avg(int n, int *P) {
    double avg = 0;
    for (int i=0; i<n; i++) {
        avg += (double)P[i] / (double)n;
    }
    return avg;
}

int MaxScore(int n, int *P) {
    int max = 0;
    for (int i=0; i<n; i++) {
        if (P[i] > P[max]) {
            max = i;
        }
    }
    return max;
}

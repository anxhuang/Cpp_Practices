#include <stdio.h>
#define ID 5
#define COURSE 3

int main() {
    int scores[ID][COURSE] = {
        { 76, 73, 85 },
        { 88, 84, 76 },
        { 92, 82, 92 },
        { 82, 91, 85 },
        { 72, 74 ,73 }
    };

    int sum = 0;
    int total = 0;
    int highestID = 0;
    double highestAvg = 0;

    for (int i=0; i<ID; i++) {
        sum = 0;
        printf("student %d\n", i+1);
        for (int j=0; j<COURSE; j++) {
            int score = scores[i][j];
            printf(" %d: %d\n", j+1, score);
            sum += score;
        }
        total += sum;
        double avg = (double)sum/(double)COURSE;
        if (avg > highestAvg) {
            highestID = i;
            highestAvg = avg;
        }
        printf(" sum: %d\n", sum);
        printf(" avg: %.2lf\n", avg);
    }
    printf("total: %d, avg: %.2lf\n", total, (double)total/(double)(ID * COURSE));
    printf("highest avg: student %d: %.2lf\n", highestID+1, highestAvg);
    return 0;
}

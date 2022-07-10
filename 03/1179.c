#include <stdio.h>

int main() {
    
//    int h = 3;
//    int w = 4;
//    int i, j;
//    int m[3][4] = {
//        {1, 2, 3, 4},
//        {5, 6, 7, 8},
//        {9, 10, 11, 12},
//    };

    int h;
    int w;
    scanf("%d", &h);
    scanf("%d", &w);

    int i;
    int j;
    int m[h][w];
    for (i=0; i<h; i++) {
        for (j=0; j<w; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    
    // 第一組 正常列印
    for (i=0; i<h; i++) {
        for (j=0; j<w; j++) {
            printf("%5d", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    // 第二組 右上角與左下角鏡射 (轉換矩陣)(轉置)
    for (i=0; i<w; i++) {
        for (j=0; j<h; j++) {
            printf("%5d", m[j][i]);
        }
        printf("\n");
    }
    printf("\n");
    
    // 第三組 左上角與右下角鏡射
    for (i=w-1; i>=0; i--) {
        for (j=h-1; j>=0; j--) {
            printf("%5d", m[j][i]);
        }
        printf("\n");
    }
    printf("\n");
    
    // 第四組 上下倒並左右相反
    for (i=h-1; i>=0; i--) {
        for (j=w-1; j>=0; j--) {
            printf("%5d", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    // 第五組 順時鐘旋轉
    for (i=0; i<w; i++) {
        for (j=h-1; j>=0; j--) {
            printf("%5d", m[j][i]);
        }
        printf("\n");
    }
    printf("\n");
    
    // 第六組 逆時鐘旋轉
    for (i=w-1; i>=0; i--) {
        for (j=0; j<h; j++) {
            printf("%5d", m[j][i]);
        }
        printf("\n");
    }
    return 0;
}

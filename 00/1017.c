#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        if (i != 4) {
            printf("floor %d\n", i);
        }
    }
    return 0;
}

/**
 說明
 有一老房東希望你幫它設計一電梯，但他希望這電梯不要出現4樓這個樓層，讓老房東輸入要去的樓層後，寫一個程式顯示從1樓坐電梯到n樓所經過的樓層

 Input Format
 你要到的樓層

 Output Format
 floor 1
 floor 2
 ... floor n

 Sample Input
 6
 
 Sample Output
 floor 1
 floor 2
 floor 3
 floor 5
 floor 6
 */

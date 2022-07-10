//
//  main.c
//  1062
//
//  Created by user on 2022/7/3.
//

#include <stdio.h>
#include <stdlib.h>
 
#include "prime.h"
 
int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    if(IsPrime(n))
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);
    return 0;
}

/**
 說明
 多檔案組合

 請寫一函式令其可以判斷傳入參數是否為質數
 int IsPrime(int num);
 是質數的話回傳 1，不是的話回傳 0
 並將函式分成prime.h與prime.c

 以下為測試用之main.c

 #include <stdio.h>
 #include <stdlib.h>
  
 #include "prime.h"
  
 int main(int argc, char *argv[]) {
     int n;
     scanf("%d",&n);
     if(IsPrime(n))
         printf("%d is prime\n", n);
     else
         printf("%d is not prime\n", n);
     return 0;
 }
 
 Input Format
 數字n

 Output Format
 是否為質數

 Sample Input
 5
 
 Sample Output
 5 is prime

 */

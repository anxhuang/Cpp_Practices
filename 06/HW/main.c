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

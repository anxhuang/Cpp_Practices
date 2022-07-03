//
//  prime.c
//  1062
//
//  Created by user on 2022/7/3.
//

#include "prime.h"

int IsPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i=2; i<num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

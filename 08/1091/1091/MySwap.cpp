//
//  MySwap.cpp
//  1091
//
//  Created by user on 2022/7/10.
//

#include <cstdio>
#include "MySwap.h"

void MySwap(int &a,int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

//
//  square.c
//  1112
//
//  Created by user on 2022/7/17.
//

#include "square.h"

int Square::area() {
    return len * len;
}

void Square::setLen(int n) {
    if (n < 1) {
        cout << "len setting error" << endl;
        len = 1;
    } else {
        len = n;
    }
}

int Square::getLen() {
    return len;
}

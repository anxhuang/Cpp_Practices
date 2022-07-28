//
//  square.h
//  1112
//
//  Created by user on 2022/7/17.
//

#ifndef square_h
#define square_h

#include <iostream>

using namespace std;

class Square {
private:
    int len;
public:
    Square();
    Square(int);
    int area();
    void setLen(int);
    int getLen();
};

#endif /* square_h */

//
//  Point2D.h
//  1097
//
//  Created by user on 2022/7/17.
//

#ifndef Point2D_h
#define Point2D_h

class Point2D {
      public:
            Point2D();
            Point2D(int x, int y);
            int getX();
            int getY();
            Point2D operator+(Point2D &p); // 重載+運算子
            Point2D operator-(Point2D &p); // 重載-運算子
            Point2D operator*(Point2D &p); //重載乘法
            Point2D operator+(int n); //重載+運算子 令x及y軸各加上一數字
 
      private:
            int X;
            int Y;
};


#endif /* Point2D_h */

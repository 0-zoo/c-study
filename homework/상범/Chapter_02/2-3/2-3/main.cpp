//
//  main.cpp
//  2-3
//
//  Created by 김상범 on 2022/10/12.
//

#include <iostream>
using namespace std;

typedef struct __point{
    int xpose;
    int ypose;
}Point;

Point &pointAdder(const Point &p1,const Point &p2){
    Point *p = new Point;
    p -> xpose = p1.xpose +p2.xpose;
    p -> ypose = p1.xpose +p2.ypose;
    return *p;
}


int main(int argc, const char * argv[]) {
    Point *p1 = new Point;
    p1 -> xpose = 1;
    p1 -> ypose = 1;
    
    Point *p2 = new Point;
    p2 ->xpose = 2;
    p2 -> ypose = 2;
    
    Point &ref = pointAdder(*p1, *p2);
    cout << ref.xpose <<"," << ref.ypose << endl;
    
    
    
}

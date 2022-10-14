//
//  main.cpp
//  2-1-(1)
//
//  Created by 김상범 on 2022/10/12.
//

#include <iostream>
using namespace std;

void plus_1(int &ref1){
    ref1 = ref1 + 1;
}

void change(int &ref2){
    ref2 = ref2 * (-1);
    
}


int main(int argc, const char * argv[]) {
    int x = 12;
    plus_1(x);
    cout << x << endl;
    change(x);
    cout << x << endl;
}

//
//  main.cpp
//  2-1-(2)
//
//  Created by 김상범 on 2022/10/12.
//

#include <iostream>
using namespace std;


void SwapByRef(int &val1,int &val2){ //
    int temp = val1;
    val1 = val2;
    val2 = temp;
}

int main(int argc, const char * argv[]) {
    int val1 = 10;
    int val2 = 20;
    
    SwapByRef(val1, val2);
    cout << "val1: " << val1 << endl;
    cout << "val2: " << val2 << endl;
    
    /*
     SwapByRef(23,45); 로 함수를 호출하는것은
     참조자를 int &val1 = 23, int int &val2 = 45 로 선언하는것과 같다
     참조자는 변수에 대해서만 선언 가능하다.
     */
    
    
}

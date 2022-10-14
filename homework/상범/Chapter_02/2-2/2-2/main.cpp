//
//  main.cpp
//  2-2
//
//  Created by 김상범 on 2022/10/12.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    const int num = 12;
    const int *ptr = &num;
    const int *(&ref) = ptr;
    
    cout << "num: " << num << endl;
    cout << "ptr: " << *ptr << endl;
    cout << "ref: " << *ref << endl;
}

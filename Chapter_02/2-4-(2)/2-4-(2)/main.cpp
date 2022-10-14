//
//  main.cpp
//  2-4-(2)
//
//  Created by 김상범 on 2022/10/14.
//

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, const char * argv[]) {
    for(int i = 0; i < 5; i ++){
        cout << rand()%100 << endl;
    }
}

#include <iostream>
using namespace std;

int SimpleFunc(int a = 10) {
    return a+1;
}

int SimpleFunc(void) {
    return 10;
}

//SimpleFunc() 호출 시 둘 중 어떤 함수를 선택해야할 지 정해지지 않았기 때문에 컴파일이 되지 않는다.
//const 포인터와 const 참조자
//참조자: 해당 변수에 대한 다른 이름을 선언하는 것, 즉, 별명
#include <iostream>
using namespace std;

int main(){
  const int num=12; //const는 상수화! 
  const int *ptr = &num;
  const int* (&ref) = ptr;

  cout << "num의 값: " << num << endl;
  cout << "num의 값: " << *ptr << endl;
  cout << "num의 값: " << *ref << endl;

  return 0;
}
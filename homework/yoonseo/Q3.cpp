//포인터: 다른 변수의 주소를 값으로 가지는 변수
//포인터의 연산자 *(asterisk)는 포인터가 가리키는 값을 의미
//배열에서 a[0] = 2, a[2] = 30 과 포인터에서 *a = 2, *a = 30 과 유사
//지정 영역에는 차이가 있지만 둘 다 값을 할당 해주는 개념 

#include <iostream>
using namespace std;

void SwapPointer(int *ptr1, int *ptr2);
 
int main(){
  int num1 = 5;
  int *ptr1 = &num1;
  int num2 = 10;
  int *ptr2 = &num2;

  cout << "ptr1 is actually pointing " << *ptr1 << endl;
  cout << "ptr2 is actually pointing " << *ptr2 << endl;

  SwapPointer(ptr1,ptr2);

  cout << "ptr1 is pointing " << *ptr1 << endl;
  cout << "ptr2 is pointing " << *ptr2 << endl;

  return 0;
}

void SwapPointer(int *ptr1, int *ptr2){
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}
#include <iostream>
using namespace std;

void SwapByRef2(int &ref1, int &ref2){
  int temp = ref1;
  ref1 = ref2;
  ref2 = temp;
}

int main(){
  int val1 = 10;
  int val2 = 20;

  SwapByRef2(val1, val2);

  cout << "val1 : " << val1 << endl;
  cout << "val2 : " << val2 << endl;

  return 0;
}

//SwapByRef2(23, 45); 과 같은 형태로 함수를 호출하면 안된다.
//이 함수의 매개변수에는 변수의 값이 아닌 주소값이 들어가야 하기 때문이다.
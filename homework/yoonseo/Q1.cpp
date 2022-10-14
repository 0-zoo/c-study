//참조자 기반의 call-by-reference 구현
  //- 인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수
  //- 인자로 전달된 int형 변수의 부호를 바꾸는 함수.  
#include <iostream>
using namespace std;

int increase(int& num);
int changeSign(int& num);

int main(){
  int a=5;
  cout << "increaseNum: " << increase(a) << endl;
  cout << "changeSign: " << changeSign(a) << endl;

  return 0;
}

int increase(int& num){
  return ++num;
}

int changeSign(int& num){
  return (-1)*num;
}
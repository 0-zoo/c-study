#include <iostream>

int SimpleFunc(int a=10){
  return a+1;
}

int SimpleFunc(void){
  return 10;
}

int main(){
  cout << "짜잔!" << SimpleFunc(10) << endl;
  //cout << "짜잔!" << SimpleFunc() << endl;
  //인자값이 없는 함수를 호출하면 둘 다 호출이 가능해서 컴파일 오류가 발생한다.
  //매개변수에 설정하는 디폴트 값의 의미: 함수 호출 시 인자를 전달하지 않으면 10이 전달된 것으로 간주하겠다. 

  return 0;
}

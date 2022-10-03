#include <iostream>
using namespace std;

int main(){
  int money=0;
  int pay=0;
  

  while(money!=-1){
    cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
    cin >> money;
    pay = 50+money*0.12;
    cout << "이번 달 급여: " << pay << "만원" << endl;
  }
  cout << "프로그램을 종료합니다." << endl;

  return 0;
}
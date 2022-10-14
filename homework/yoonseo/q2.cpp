#include <iostream>
using namespace std;

int main(){
  char name[10];
  char phoneNum[20];

  cout << "이름은? ";
  cin >> name;
  cout << "전화번호는? ";
  cin >> phoneNum;

  cout << name << endl << phoneNum << endl;

  return 0;
}
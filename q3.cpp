#include <iostream>
using namespace std;

int main(){
  int num;
  
  cout << "몇단? ";
  cin >> num;

  cout << num << "단" << endl;

  for(int i=1; i<=9; i++){
    cout << num << "*" << i << "=" << num*i << endl;
  }

  return 0;
}
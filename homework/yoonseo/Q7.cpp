#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  srand(time(NULL));

  cout << "0이상 100미만의 난수 생성: " << rand()%100 << endl;

  return 0;
}
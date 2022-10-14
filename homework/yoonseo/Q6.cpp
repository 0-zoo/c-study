//c++의 표준함수 호출
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char str1[30] = "hello I am ";
  char str2[30] = "yoonseo";
  char str3[30];

  cout << "str1의 문자열 길이는 " << strlen(str1) << endl;
  cout << "str1 + str2는 " << strcat(str1,str2) << endl;
  cout << "str3에 str1 문자열을 복사하면 " << strcpy(str3, str1) << endl;
  
  if(strcmp(str1,str3)==0){
    cout << "str1과 str3은 동일한 문장입니다." << endl;
  }
  else{
    cout << "str1과 str3은 동일한 문장이 아닙니다." << endl;
  }
  return 0;
}
//구조체에 대한 new & delete 연산
#include <iostream>
using namespace std;

//2차원 평면상에서의 좌표를 표현할 수 있는 구조체
typedef struct __Point{
  int xpos;
  int ypos;
}Point;

Point& PntAdder(const Point &p1, const Point &p2);

int main(){
  Point *ptr1 = new Point;
  cout << "ptr1의 xpos와 ypos: ";
  cin >> ptr1 -> xpos >> ptr1 -> ypos;

  Point *ptr2 = new Point;
  cout << "ptr2의 xpos와 ypos: ";
  cin >> ptr2 -> xpos >> ptr2 -> ypos;

  //동적할당 한 변수를 함수의 참조형 매개변수의 인자로 어떻게 전달해야 하는가?
  Point &result = PntAdder(*ptr1,*ptr2);

  cout << "결과의 xpos와 ypos: " << result.xpos << " " << result.ypos << endl;//포인터를 이용한 구조체 멤버의 접근

  delete ptr1;
  delete ptr2;
  delete &result;

  return 0;
}

Point& PntAdder(const Point &p1, const Point &p2){
  //함수 내에 선언된 변수를 참조형으로 반환하려면 해당 변수는 어떻게 선언해야 하는가?
  Point *result = new Point;
  result -> xpos = p1.xpos + p2.xpos;
  result -> ypos = p1.ypos + p2.ypos;

  return *result;

}
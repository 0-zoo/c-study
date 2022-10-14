// 헤더파일을 컴파일러가 호출할 때 여러번 호출되지 않게끔 하는 기능
//만약 Q8_H가 정의되어 있지 않다면, 이하의 코드(#endif 전까지의 코드), 즉 헤더 파일의 코드를 HERO_H로 정의(#define)하라. 
//만약 Q8_H가 정의되어있다면 넘어가라.
#ifndef Q8_H 
#define Q8_H

namespace BestComImpl{
  void SimpleFunc(void);
}

namespace ProgComImpl{
  void SimpleFunc(void);
}

#endif
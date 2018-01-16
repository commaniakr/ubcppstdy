#include <iostream>
#include <string>

using namespace std;

class calc {
public:
  int m = 0;
  int n = 0;
  char c;
  int add() {
    return m + n;
  }
  int sub() {
    return m - n;
  }
  int mul() {
    return m * n;
  }
  int div() {
    return m / n;
  }
};

int main() {
  calc cal;
  int answer;
  cout << "식을 입력하세요: ";
  cin >> cal.m >> cal.c >> cal.n;
  switch (cal.c){
    case '+':
      answer = cal.add();
      break;
    case '-':
      answer = cal.sub();
      break;
    case '*':
      answer = cal.mul();
      break;
    case '/':
      answer = cal.div();
      break;
  }
  cout << "정답은 " << answer << "입니다." << endl;
  return 0;
}

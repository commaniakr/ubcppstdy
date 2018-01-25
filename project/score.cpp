#include "score.h"

using namespace std;



void import(vector<student> *lst) {
  char choice;
  cout << "성적을 추가합니다." << endl;
  student temp;
  cout << "이름: ";
  cin >> temp.name;
  cout << "학번: ";
  cin >> temp.id;
  cout << "점수: ";
  cin >> temp.score;
  lst->push_back(temp);
  break;
}

void print() {

}

void find(vector<student> *lst) {
  string keyword;
  cout << "찾을 키워드를 입력하세요(1.이름 2.학번): ";
  cin >> keyword;

  }
}

int main() {
  vector<student> lst;
  bool exit = true;
   while(exit) {
     char choice;
     cout << "------------------------------------------------------------" << endl;
     cout << "               우분투고등학교 성적 관리 시스템" << endl;
     cout << "------------------------------------------------------------" << endl;
     cout << "1. 성적 입력" << endl << "2. 성적 찾기" << endl << "3. 성적 수정" << endl;
     cout << "4. 성적 삭제" << endl << "5. 정렬" << endl << "6. 평점으로 변환" << endl;
     cout << "7. 프로그램 정보" << endl << "8. 저장하고 끝내기" << endl;
     cout << "원하시는 번호를 눌러 주세요: ";
     cin >> choice;
     switch (choice) {
       case '1':
       import(&lst);
       break;
       case '2':
       find(&lst);
       break;
       case '3':
       //score.edit();
       break;
       case '4':
       //score.delete();
       case '5':
       //score.align();
       case '6':
       //score.convert();
       case '7':
       cout << endl;
       cout << "Copyright (c) 2018 HKLM. All rights reserved." << endl;
       cout << "이 프로그램은 코딩 실습 목적으로 만들었습니다." << endl << endl;
       break;
       case '8':
       exit = false;
       break;
     }
   }
   return 0;
}

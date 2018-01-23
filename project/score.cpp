#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct student {
  string name;
  int id;
  int score;
  student *next;
};

class scorelist {
private:
  student *head, *tail;
public:
  scorelist() {
      head = NULL;
      tail = NULL;
    }
    void create() {
        student *temp = new student;
        cout << "학생의 이름, 학번, 성적을 각각 띄어서 입력하세요. " << endl;
        cin >> temp->name >> temp->id >> temp->score;
        temp->next = NULL;
        if (head == NULL) {
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }
    void import() {
      cout << "파일로부터 학생의 성적을 불러옵니다. (Not implemented yet)" << endl << endl << endl;
    }
    void find() {
      cout << "학생의 이름이나 학번을 입력하세요: (Not implemented)";
      cout << head->name << " " <<head->id << " "<<head-> score << endl;
    }

};

int main() {
  scorelist score;
  bool exit = true;
  while(exit) {
    char choice;
    cout << "------------------------------------------------------------" << endl;
    cout << "               우분투고등학교 성적 관리 시스템" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "1. 성적 입력" << endl << "2. 성적 출력" << endl << "3. 성적 수정" << endl;
    cout << "4. 성적 삭제" << endl << "5. 정렬" << endl << "6. 평점으로 변환" << endl;
    cout << "7. 프로그램 정보" << endl << "8. 나가기" << endl;
    cout << "원하시는 번호를 눌러 주세요: ";
    cin >> choice;

    switch (choice) {
      case '1':
      cout << "성적을 추가합니다." << endl;
      cout << "1. 파일로 입력하기 2. 직접 입력하기" << endl;
      cin >> choice;
      switch (choice) {
        case '1':
        score.import();
        break;
        case '2':
        score.create();
        break;
        default:
        cout << "오류!" << endl << endl << endl << endl;
        break;
      }
      break;
      case '2':
      cout << "1. 검색 2. 전체 리스트 파일로 저장";
      cin >> choice;
      switch (choice) {
        case '1':
        score.find();
        break;
        case '2':
        //score.export();
        break;
        default:
        cout << "오류!" << endl << endl << endl << endl;
        break;
      }
      //전체 내용 파일로 출력 (Not implemented)
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

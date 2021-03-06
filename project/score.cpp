#include <iostream>
#include <string>
#include <fstream>
#include "score.h"

bool scorelist::create() {
	student *temp = new student;
	cin >> temp->name;
	if (!strcmp(temp->name, "exit")) {
		return true;
	}
	cin >> temp->id;
	cin >> temp->score;
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
	return false;
}
void scorelist::import() {
  cout << "파일로부터 학생의 성적을 불러옵니다. (Not implemented yet)" << endl << endl << endl;
}

student* scorelist::find() {
	student *current;
	char choice;
	char* keyword = new char[6];
	int find_id;
	cout << "1. 이름으로 찾기 2. 학번으로 찾기 ";
	cin >> choice;
	switch (choice) {
	case '1':
		cout << "이름을 입력하세요: ";
		cin >> keyword;
		current = head;
		do {
			if (strcmp(current->name, keyword) == 0) {
				return current;
			}
			current = current->next;
		} while (current != NULL);
		break;
	case '2':
		cout << "학번을 입력하세요: ";
		cin >> find_id;
		current = head;
		do {
			if (current->id == find_id) {
			return current;
			}
			current = current->next;
		} while (current != NULL);
		break;
	}
	return NULL;
}

void scorelist::print(student *found) {
	cout << "이름   학번   성적" << endl;
	cout << "-------------------" << endl;
	cout << found->name << " " << found->id << " " << found->score << endl;
	cout << "-------------------" << endl;
}

int scorelist::erase(student *found) {
	student *previous;
	student *current = NULL;
	student *it;
	previous = NULL;
	it = head;
	do {
		if (it->next == found) {
			previous = it;
			current = it->next;
			break;
		}
		it = it->next;
	} while (it != NULL);

	if (current->next == NULL) {
		if (current == head) {
			head = NULL;
			tail = NULL;
			return 0;
		}
		else {
			previous->next = NULL;
			previous = tail;
			current = NULL;
			return 0;
		}
	}
	else if (current == head) {
		head = current->next;
		current = NULL;
		return 0;
	}
	else {
		previous->next = current->next;
		current = NULL;
		return 0;
	}
}

int main() {
  scorelist score;
  bool exit = false;
  student *temp;
  while(!exit) {
    char choice;
	char* keyword = NULL;
    cout << "------------------------------------------------------------" << endl;
    cout << "               우분투고등학교 성적 관리 시스템" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "1. 성적 입력" << endl << "2. 성적 찾기" << endl << "3. 성적 수정" << endl;
    cout << "4. 성적 삭제" << endl << "5. 정렬" << endl << "6. 평점으로 변환" << endl;
    cout << "7. 프로그램 정보" << endl << "8. 저장하고 나가기" << endl;
    cout << "원하시는 번호를 눌러 주세요: ";
    cin >> choice;

    switch (choice) {
      case '1':
		  cout << "성적을 추가합니다." << endl;
		  cout << "학생의 이름, 학번, 성적을 각각 띄어서 입력하세요. 나가려면 exit를 입력하세요." << endl;
		  while (exit == false) {
			  exit = score.create();
		  }
		  exit = false;
		  break;
      case '2':
		  cout << "학생을 검색합니다." << endl;
		  temp = score.find();
		  if (temp == NULL) {
			  cout << "찾는 학생이 없습니다." << endl;
			  break;
		  }
		  else {
			  cout << "결과를 찾았습니다." << endl << endl;
			  score.print(temp);
		  }
		  break;
      case '3':
		  cout << "정보를 수정할 학생을 검색합니다." << endl;
		  temp = score.find();
		  if (temp == NULL) {
			  cout << "찾는 학생이 없습니다." << endl;
			  break;
		  }
		  else {
			  cout << "결과를 찾았습니다." << endl << endl;
			  score.print(temp);
		  }
		  cout << "어느 값을 수정하시겠습니까?" << endl;
		  cout << "1. 이름 2. 학번 3. 성적 : ";
		  cin >> choice;
		  switch (choice) {
		  case '1':
			  cout << "이름: ";
			  cin >> temp->name;
			  break;
		  case '2':
			  cout << "학번: ";
			  cin >> temp->id;
			  break;
		  case '3':
			  cout << "성적: ";
			  cin >> temp->score;
			  break;
		  }
		  cout << "다음과 같이 수정되었습니다: " << endl;
		  score.print(temp);
		  break;
      case '4':
		  cout << "삭제할 학생을 검색합니다." << endl;
		  temp = score.find();
		  if (temp == NULL) {
			  cout << "찾는 학생이 없습니다." << endl;
			  break;
		  }
		  else {
			  cout << "결과를 찾았습니다." << endl << endl;
			  score.print(temp);
		  }
		  cout << "정말 삭제하시겠습니까? (Y/N)";
		  cin >> choice;
		  switch (choice) {
		  case 'Y':
		  case 'y':
			  score.erase(temp);
			  break;
		  default:
			  cout << "취소." << endl;
			  break;
		  }
		  break;
      case '5':
      //score.align();
		  break;
      case '6':
      //score.convert();
		  break;
	  case '7':
      cout << endl;
      cout << "Copyright (c) 2018 HKLM. All rights reserved." << endl;
      cout << "이 프로그램은 코딩 실습 목적으로 만들었습니다." << endl << endl;
      break;
      case '8':
		  //score.save();
      exit = true;
      break;
    }
  }
  return 0;
}

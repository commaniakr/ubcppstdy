#include<iostream>

using namespace std;

enum theater {
	theater_1 = 1,
	theater_2,
	theater_3
};

int main() {
	int a = 0;
	cout << "enter number(1-3) : ";
	cin >> a;
	switch(a){
	case theater_1:
		cout << "1관을 선택하셨습니다." << endl;
		break;
	case theater_2:
		cout << "2관을 선택하셨습니다." << endl;
		break;
	case theater_3:
		cout << "3관을 선택하셨습니다." << endl;
		break;
       }
	return 0;
}

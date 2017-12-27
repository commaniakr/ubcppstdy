#include <iostream>
using namespace std;

int main() {
	int score = 0;
	cout << "점수를 입력하세요 : ";
	cin >> score;
	cout << endl;

	if (score < 0 || score > 100) {
		cout << "오류!" << endl;
		return 1;
	}
	else if (score <= 100 && score >= 90) {
		cout << "당신의 성적은 A 입니다." << endl;
	}
	else if (score < 90 && score >= 80) {
		cout << "당신의 성적은 B 입니다." << endl;
	}
	else if (score < 80 && score >= 60) {
		cout << "당신의 성적은 C 입니다." << endl;
	}
	else if (score < 60 && score >= 40) {
		cout << "당신의 성적은 D 입니다." << endl;
	}
	else {
		cout << "당신의 성적은 F 입니다." << endl;
	}
	return 0;
}

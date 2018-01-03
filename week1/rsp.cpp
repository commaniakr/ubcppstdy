#include <iostream>
#include <random>
using namespace std;

int main() {
	int sel, cpu;
	random_device r;
	mt19937_64 rnd(r());
	cout << "가위바위보 (가위: 1, 바위: 2, 보: 3) : ";
	cin >> sel; 
	uniform_int_distribution<int> range(1, 3);
	cpu = range(rnd);
	if (sel <= 0 || sel > 3) {
		cout << "다시 입력해주세요!" << endl; // 예외 출력
		return 1;
	}
	cout << "당신의 선택은... " << sel << endl;
	cout << "AI의 선택은... " << cpu << endl << endl;
	if (sel == cpu) {
		cout << "비겼습니다!" << endl; // 무승부 출력
	}
	else if (sel == 1) {
		if (cpu == 2) {
			cout << "당신이 졌습니다!" << endl; // 패배 출력
		}
		else if (cpu == 3) {
			cout << "당신이 이겼습니다!" << endl; // 승리 출력
		}
	}
	else if (sel == 2) {
		if (cpu == 1) {
			cout << "당신이 이겼습니다!" << endl; // 승리 출력
		}
		else if (cpu == 3) {
			cout << "당신이 졌습니다!" << endl; // 패배 출력
		}
	}
	else if (sel == 3) {
		if (cpu == 1) {
			cout << "당신이 졌습니다!" << endl; // 패배 출력
		}
		else if (cpu == 2) {
			cout << "당신이 이겼습니다!" << endl; // 승리 출력
		}
	}
	return 0;
}

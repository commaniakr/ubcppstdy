#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand((unsigned int)time(0));
	double percent;
	percent = rand() % 10000 / 100.f;
	cout << "확률 : " <<percent<< endl;
	
	if (percent >= 0 && percent <= 30 ) {
		cout << "비가 내립니다." << endl;
	}
	else if (percent > 30 && percent <= 40) {
		cout << "눈이 내립니다." << endl;
	}
	return 0;
}

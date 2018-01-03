#include<iostream>

using namespace std;

int main(){
	int h, i, j;
	cout << "Enter Height: ";
	cin >> h;
	if (h < 3) {
		cout << "Cannot Print 'A'" << endl;
		return 1;
	}
	for(i = 0; i < h; i++) {
		for (j = 0; j < h - i - 1; j++) {
			cout << ' ';
		}
		if (h > 4 && i == (h/2)+1){
			for(j = 0; j < i * 2 + 1; j++) {
				cout << '*';
			}
		}
		else if (h <= 4 && i == (h/2)){
			for(j = 0; j < i * 2 + 1; j++) {
				cout << '*';
			}	// 중간의 가로줄로 문자 'A' 완성
		}
		else{
			cout << '*';
			for(j = 0; j < i * 2 - 1; j++) {
				cout << ' ';
			}
			if(i > 0){
				cout << '*';
			}
		}
		cout << endl; // 한 줄 완성
	}
	return 0;
}

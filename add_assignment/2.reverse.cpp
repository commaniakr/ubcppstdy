#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[50];
	char rev[50]; // 문자열 배열과 거꾸로 된 문자열 배열 준비
	int i = 0;
	cin.getline(str, 51);
	int k = strlen(str); // k를 문자열 길이로 초기화
	for(i = 0; i < k; i++) {
		rev[i] = str[(k-1)-i];
	}
	rev[k] = str[k]; // 잘못된 메모리 참조 방지
	cout << rev << endl;
	return 0;
}

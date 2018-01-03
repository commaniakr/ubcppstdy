#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[25];
	int i = 0;
	int num = 0;
	int len = 0;
	cout << "Enter string: ";
	cin.getline(str, 25);
	len = strlen(str);
	for (i = 0; i < len; i++) {
		if ( str[i] >= 65 && str[i] <= 90 ) {
			num++;	
		}
		else if (str[i] >= 97 && str[i] <= 122 ) {
			num++;
		}
	}
	cout << "This string includes " << num << " alphabets." << endl;
	return 0;
}

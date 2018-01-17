#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str1[25];
	char str2[25];
	char cat[50];
	int len1, len2, i;
	cout << "Enter first string: ";
	cin.getline(str1, 25);
	cout << "Enter second string: ";
	cin.getline(str2, 25);
	len1 = strlen(str1);
	len2 = strlen(str2);
	cout << len1 << ", " << len2 << endl;
	for(i = 0; i < len1; i++) {
		cat[i] = str1[i];
	}
	for(i = 0; i <= len1+len2; i++) {
		cat[len1+i] = str2[i];
	}
	cout << cat << endl;
	return 0;
}

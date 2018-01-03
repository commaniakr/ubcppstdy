#include <iostream>
using namespace std;

int factorial(int num) {
	int factorial =  1;
	for (; num > 1; --num)
		factorial *= num;
	return factorial;
}

int main() {
	int n;
	cout << "Enter num: ";
	cin >> n;
	cout << "Factorial : " << factorial(n) << endl;
	return 0;
}


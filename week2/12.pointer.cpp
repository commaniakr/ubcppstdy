#include <iostream>
using namespace std;

int main() {
	int myscore = 1000;
	int number = 0;
	int *p = &myscore;
	int **ppap = &p;

	number = **ppap;

	cout << number << endl;
}

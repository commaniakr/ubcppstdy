#include <iostream>
#include <time.h>
using namespace std;

int main() {
	int arr[10][10];
	srand((unsigned int)time(0));
	while(1) {
		cout << "random: " << (rand() % 100 + 1) << endl;
	}	
	return 0;
}

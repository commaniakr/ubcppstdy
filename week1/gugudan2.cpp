#include <iostream>
using namespace std;
int main() {
	int i, j;
	for (i = 1; i <= 9; i++) {
		for(j = 1; j <= 9; j++) {
			if (i%2 == 0 && j%2 == 0) {
				cout << i << " X " << j << " = " << i*j << endl;
			}
		}
	}
	return 0;
}

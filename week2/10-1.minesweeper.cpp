#include <iostream>
#include <random>
using namespace std;

int main() {
  int min=0;
  int max=9;
  int i, j;
  bool arr[10][10];
  random_device r;
  mt19937_64 rnd(r());
  uniform_int_distribution<int> range(min, max);
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      if (range(rnd) < 4) {
        arr[i][j] = true;
      }
    }
  }

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      cout << "[";
      if (arr[i][j] == true) {
        cout << "*";
      }
      else {
        cout << " ";
      }
      cout << "] ";
    }
    cout << endl;
  }
  return 0;
}

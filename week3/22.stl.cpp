#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

void printarr(int* arr){
  for(int i = 0; i < 100; i++) {
    cout << "[" << arr[i] << "] ";
    if ((i+1)%10 == 0) cout << endl;
  }
}

int main() {
  int arr[100]; // 100개짜리 행렬 생성
  random_device r;
  mt19937_64 rnd(r());
  uniform_int_distribution<int> range(1, 1000);
  for (int i; i < 100; i++) {
    arr[i] = range(rnd);
  }
  cout << "랜덤으로 배열된 행렬을 출력합니다: " << endl << endl;
  printarr(arr);
  sort(arr, arr + 100); // 작은 숫자부터 큰 숫자 순서대로 정렬
  cout << endl << "오름차순 정렬한 행렬을 출력합니다: " << endl << endl;
  printarr(arr);
  return 0;
}

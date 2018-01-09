#include<iostream>

using namespace std;

int change_score(int *pnum) {
    int c_num = 0;
    c_num = 100; // 리턴하는 값인 c_num만 바꿔주면 된다.
    return c_num;
}


int main() {
    int num = 0;
    cout << change_num(&num) << endl;
    return 0;
}

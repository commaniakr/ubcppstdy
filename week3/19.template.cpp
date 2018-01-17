#include<iostream>

using namespace std;

template<typename t>
void out(t data) {
    cout << typeid(t).name() << endl;
    cout << data << endl;
}

class test
{
public:
    test();
    ~test();

private:

};

int main() {
    out<test>();

    return 0;
}

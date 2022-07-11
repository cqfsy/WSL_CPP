#include<iostream>


using namespace std;


int count() {
    int a = 0;
    static int b = 0;
    ++a;
    ++b;
    cout << "a: " << a << ", b: " << b << endl;
    return 0;
}


int main() {
    cout << "这是一个说明【静态变量】的例子" << endl;
    for (int i = 0; i < 3; ++i) {
        count();
    }
    return 0;
}

//hello
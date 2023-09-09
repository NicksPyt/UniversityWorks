#include <iostream>
using namespace std;
main() {
    int a = 6;
    cout << a;
    cout << &a;
    cout << *&a;

    int *pa = &a;
    cout << *pa + 1 << endl; //

    int b = 7;
    b = --*pa;
    cout << b << endl;
}


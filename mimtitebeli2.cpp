#include<iostream>
using namespace std;
string func1() {
    return "Im Here";
}
string func2() {
    return "Hello Here";
}
main (){
    string(*funcPointer)();
    funcPointer = func2;
    cout << funcPointer();
}
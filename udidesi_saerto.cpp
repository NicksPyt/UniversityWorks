#include <iostream>
#include <cmath>
using namespace std;
int pirveli(int x, int y) {
    while(x != y){
        if(x > y)
            x =  x - y;
        else    
            y = y - x;
    }
    return x;
}
int main() {
    int a, b;
    cout << "Type 2 number: ";
    int d = pirveli(a, b);
    cout << "Result: " << d;
}
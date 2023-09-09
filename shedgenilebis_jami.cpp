#include <iostream>
#include <cmath> //shemovitanot n elementiani masivi da vipovot am masivis shedgenili elementebis ricxvebis jami
using namespace std;
bool shedgenili(int x) {
    bool f = true;
    for (int i = 2; i < x / 2 && f == true; i++) {
        if(x % i == 0)
            f = false;
    }
    return f;
}
int sum(int a[], int n){
    int s = 0;
    for ( int i = 0; i < n; i++) {
        if(shedgenili(a[i]) == false){
            s += a[i];
        }
    }
    return s;
}
int main() {
    int a[10];
    cout << "Type: ";
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    int s = sum(a, 10);
    cout << s;
} 
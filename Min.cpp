#include <iostream> 
#include <cmath>
#define n 3
using namespace std;
int main() {
    int a[n], i;
    for (i = 0; i < n; i++) {
        cout << "a(" << i << ")= ";
        cin >> a[i];
    }
    for (i = 1; i < n; i++) {
        if(a[0] > a[i])
            a[0] = a[i];
    }
    cout << "Yvelaze Patara Elementia: " << a[0] << endl;
}

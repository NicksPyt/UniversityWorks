#include <iostream> 
#include <cmath>
#define n 3
using namespace std;
void main1() {
    int x, y;
    cout << "Type Number: ";
    cin >> x;
    if(x < 0){
        y = pow(x, 2) + 8;
        cout << "Result: " << y << endl;
    }
    else if(x > 0){
        cout << "X Ganusazgvrelia!" << endl;
    }
    else if(x == 0)
        cout << "You Typed 0!" << endl;
}
void main2() { 
    int x, y;
    cout << "Type Number: ";
    cin >> x;
    y = 7 * x * x + 2 * x - 5;
    cout << "Result: " << y << endl;
}
void main3() { 
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
void main4() {
    int x, y;
    cout << "Type Number: ";
    cin >> x;
    y = pow(x, 2);
    cout << "Result: " << y << " " << endl;
}
void main5() {
    float x = 1, max = 39, i;;
    bool t = true;
    for (i = 3; i <= 39; i = i + 3) {
        if(t == true){
            x = x - (1/i);
            t = false;
        }
        else if(t == false) {
            x = x + (1/i);
            t = true;
        }
    }
    cout << "Jami  aris: " << x << " " << endl;
}
main() {
    main1();
    main2();
    main3();
    main4();
    main5();
}
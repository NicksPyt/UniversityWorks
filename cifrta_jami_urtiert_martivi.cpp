#include <iostream>//funqciit, 2 ricxvi vipovot cifrta jami da shemdeg davadginot arian tu ar aurtiert martivi jami
#include <cmath>
using namespace std;
int cifrta_jami(int x) {
    int s = 0;
    while(x != 0){
        s = s + x % 10;
        x = x / 10;
    }
    return s;
}
int usg(int x, int y) {
    while(x != y)
        if(x > y)
            x = x - y;
        else 
            y = y - x;
    return x;
}
int main() {
    int x, y;
    cout << "Type: ";
    cin >> x >> y;
    int d = cifrta_jami(x);
    int g = cifrta_jami(y);
    cout << "Result 1: " << d << endl << "Result 2: "<< g << endl;
    int p = usg(d, g);
    cout << "usg: " << p << endl;
    if(p == 1){
        cout << "urtiert martivia" << endl;
    }
    else   
        cout << "ar aris urtiert martivi" << endl;
}
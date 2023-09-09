#include <iostream> //vipovot 2 ricxvi aris tu ara urtiert martivi
#include <cmath>   
using namespace std;
int usg(int x, int y) {
    while(x != y){
        if(x > y){
            x -= y;
        }
        else
            y -= x;
    }
    return x;
}
void martivi(int x, int y) {
    int s = usg(x, y);
    if(s == 1){
        cout << "Urtiert Martivia!";
    }
    else    
        cout << "ar aris urtiert martivi!";
}
int main() {
    int a, b;
    cout << "Type Number: ";
    cin >> a >> b;
    martivi(a, b);
}
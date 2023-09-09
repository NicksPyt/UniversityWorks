#include <iostream>
using namespace std;
#include <string>
bool sami_a(string a){
    int m = 0;
    for(int i = 0; i < a.length(); i++){
        if(a[i] == 'a')
            m++;
    }
    if(m == 3)
        return true;
    else
        return false;
}
main() {
    string a;
    cout << "Type: ";
    cin >> a;
    if(sami_a(a))
        cout << "\n striqonshi aris 3 a";
    else
        cout << "\n ar aris 3 a";
}
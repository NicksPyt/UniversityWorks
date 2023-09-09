#include <iostream>
using namespace std; //მოცემულია სტრიქონი და უნდა დავადგინოთ არის თუ არა პალინდრომი
bool palindromi(string s1) {
    int n = s1.size(), i;
    for(i = 0; i < n / 2; i++){
        if(s1[i] != s1[n - i - 1])
            return false;
    }
    return true;
}
main() {
    string s;
    cout << "Type Text: ";
    cin >> s;
    if(palindromi(s))
        cout << "\n Palindromia! ";
    else
        cout << "\n Palindromi Ar Aris! "; 
}

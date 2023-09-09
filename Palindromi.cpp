#include <iostream>
using namespace std; //მოცემულია სტრიქონი და უნდა დავადგინოთ არის თუ არა პალინდრომი
main() {
    string s;
    int n, j = 0;
    cout << "Type Text: ";
    cin >> s;
    n = s.size();  //Length() 
    cout << "You Type: " << s << endl;
    cout << "Symbolos Raodenoba: " << n;
    for(int i = 0; i < n / 2; i++){
        if(s[i] != s[n - i - 1])
            j = 1;
        break;
    }
    if(j == 0) 
        cout << "\n Palindromia! ";
    else
        cout << "\n ar aris palindromi! ";
}

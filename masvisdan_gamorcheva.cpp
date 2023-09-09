#include <iostream>
using namespace std; //symboloebisgan gamovarchiot mxolod ricxvebi
#define n 10
int datvla(char arr[], int m) {
    int i, d = 0;
    for (i = 0; i < m; i++){
        if((arr[i] >='0') && (arr[i] <= '9')){
            d++;
        }
    }
    return d;
}
main() {
    char a[n];
    int i, k;
    cout << "Type Any Symbols: ";
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Added Symbols: ";
    for (i = 0; i < n; i++){
        cout << a[i] << " ";
        cout << endl;
    }
    
    
}
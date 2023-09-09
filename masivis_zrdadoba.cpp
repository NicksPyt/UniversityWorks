#include <iostream>//davadginot zrdadia tu ar masivi
using namespace std;  //  2 6 7 12 3 45 75 
#define n 7
bool masivis_zrdadoba(int arr[], int m) {
    bool f = true;
    for (int i = 0; i < m && f; i++)
        if(arr[i] > arr[i +1])
            f = false;
    return f;
}
int main() {
    int arr[n], i;
    cout << "Type Numbers: ";
    for(i = 0; i < n; i++)
        cin >> arr[i];
        if (masivis_zrdadoba(arr, n))
            cout << "Zrdadia! ";
        else
            cout << "araris zrdadi "; 
}
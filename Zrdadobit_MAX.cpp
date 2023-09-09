#include <iostream>
using namespace std;
void sortireba(int arr[], int m) {
    for(int i = 0; i < m - 1; i++){
        int max = arr[0], k = 0;
        for(int j = 1; j < m - i; j++)
            if (arr[j] > max){
                max = arr[j];
                k = j;
            }
        int z = arr[k];
        arr[k] = arr[m - 1 - i];
        arr[m - 1 - i] = z;
    }
    for(int i = 0; i < m; i++)
    cout << arr[i] << "  "; 
}   
int main() {
    int a[5];
    cout << "Type: ";
    for(int i = 0; i < 5; i++)
        cin >> a[i];
    sortireba(a, 5);
}
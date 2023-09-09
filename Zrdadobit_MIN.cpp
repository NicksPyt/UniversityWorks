#include <iostream>
using namespace std;
void sortireba(int arr[], int m) {
    for(int i = 0; i < m - 1; i++){
        int min = arr[i], k = i;
        for(int j = i + 1; j < m; j++)
            if (arr[j] < min){
                min = arr[j];
                k = j;
            }
        int z = arr[k];
        arr[k] = arr[i];
        arr[i] = z;
    }
    for(int i = 0; i < m; i++)
    cout <<  arr[i] << "  "; 
}   
int main() {
    int a[5];
    cout << "Type: ";
    for(int i = 0; i < 5; i++)
        cin >> a[i];
        sortireba(a, 5);
}
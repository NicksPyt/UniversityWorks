#include <iostream>
using namespace std;  //
void shevseba(int *const arr, const int size) {
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}
void bechdva(int *const arr, const int size) {
    for(int i = 0; i< size; i++) {
        cout << "Result: " << arr[i] << "\t";
        cout << endl;
    }
}
main() {
    int size = 0;
    cout << "Type Size Of Array: "; 
    cin >> size;
    int *arr= new int[size];
    cout << "Type Array: ";
    for(int i = 0; i < size; i++) { 
        cin >> arr[i];
    }
    cout << "Print Array: " << endl;
    bechdva(arr, size);
    
    delete [] arr;

    return 0;
}
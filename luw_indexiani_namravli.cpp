#include <iostream> //luw indexiani elementebis namravli
#include <cmath>
using namespace std;
int namravli(int array[], int n) {
    int s = 1;
    for (int i = 2; i < n; i += 2)
    {
       s = s * array[i];
    }
    return s;
}
int main() {
    int array[5];
    cout << "type: ";
    for( int i = 0; i < 5; i++){
        cin >> array[i];
    }
    cout << "Result: " << namravli(array, 5);
}
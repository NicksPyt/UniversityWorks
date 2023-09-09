#include <iostream> //vipovot dadebiti elementebis sashualo
#include <cmath>    // kent indexiani ricxvebis sashualo aritmetikuli
using namespace std;// gvaq 25iani masivi, vipovot masivis kent inndexiani ricxvebi arian tu ara 3is jeradebi 
int min(int array[], int n) {          // vipovot kent indexian elementebs shoris min elementi
    int min = array[1];
    for(int i = 0; i < n; i++) {
        if(min > array[i]){
            min = array[i];
        }
    } 
    return min;
}
int main() {
    int array[5];
    cout  << "Type number: ";
    for(int i = 0; i < 5; i++) {
        cin >> array[i];
    }
    int n = min(array, 5);
    cout << "Result: " << n;
}
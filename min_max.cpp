#include <iostream> 
#include <cmath>  // max da min ricxvebs shoiris min da max ricxvis jami
using namespace std;
int max(int array[], int n) { //max povna
    int n, a[n], i, max;
    for(i = 0; i < n; i++)
        cin >> a[i];
        max = a[0];
        for (i = 1; i < n; i++)
            if(max < a[i])
                max = a[i];
    cout << max;
}
int min(int array[], int n) {      //min povna     
    int min = array[1];
    for(int i = 0; i < n; i++) {
        if(min > array[i]){
            min = array[i];
        }
    } 
    return min;
}
int sum(int array[], int n) {
    int index1 = max(array, n);
    int index2 = min(array, n);
    int d1, d2;
    int sumall = 0;
    if(index1 > index2) {
        d1 = index2;
        d2 = index1;
    }
    else {
        d1 = index1;
        d2 = index1;
    }
    for(int i = d1 + 1; i < d2; i++) {
        if(array[i] > 0) {
            sumall += array[i];
        }
    }
    return sumall;
}
int main() {
    int array[9], jami;
    cout << "Type Number: ";
    for(int i = 0; i < 9; i++){
        cin >> array[i];
    }
    jami = sum(array, 9);
    cout << "jami: " << jami;
}
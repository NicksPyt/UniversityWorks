#include <iostream>
using namespace std;
void minimumi(int arr[], int arrSize){
    int min1 = arr[0],min2 = arr[1],t;
    if (min1 < min2) {
        t = min1;
        min1 = min2;
        min2 = t;
    }
    for (int i = 2; i < arrSize; i++) {
        if (arr[i] < min1) {
            min1 = arr[i];
            if (min1 < min2) {
                t = min1;
                min1 = min2;
                min2 = t;
            }
        }
    }
    cout << min1 << " " << min2;
}
int main()
{
    int arrSize;
    cin >> arrSize;
    int arr[arrSize];
    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }
    minimumi(arr,arrSize);
    return 0;
}
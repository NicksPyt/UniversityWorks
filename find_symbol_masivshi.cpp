#include <iostream>   //gvaqvs symboluri masivi sadac sityvebi ertmanetisgan aris mdzimit gamokofili, davitvalot sitkvebis raodenoba
using namespace std;  //  apple,watermelon,mango,banana,kombosto
//#define m 5
int count(char arr[], int n) {
    int k = 1;
    for(int i = 0; i < n; i++){
        if(arr[i]==','){
            k = k + 1;
        }
    }
    return k;
}
int main() {
    char a[5];
    int i;
    cout << "Type: ";
    for(i = 0; i < 5; i++) {
        cin >> a[i];
    }
    cout << count(a, 5);
}
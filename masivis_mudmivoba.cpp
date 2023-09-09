#include <iostream> //aris tu ara mudmivi
#include <cmath>
using namespace std;
int main() {
    int arr[10];
    bool f = true;
    cout << "Type Number: ";
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < 9; i++){
        if(arr[i] != arr[i + 1]){
            f = false;
        }
    }
    if(f) {
        cout << "mudmivia";
    }
    else
        cout << "ar aris";
    
}
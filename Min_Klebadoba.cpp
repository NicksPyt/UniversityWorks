#include <iostream> /* Nika Nozadze */
#include <math.h>
using namespace std;
void main1(){ //vipovot 2 da 3 ricxvebs shoris min mnishvneloba
    int a, b, c;
    cout << "Type 3 Number To Find Minimum: ";
    cin >> a >> b >> c;
    if(a < b && a < c){
        cout << a << " Is The Smallest"<< endl;
    }
    else if(b < a && b < c){
        cout << b << " Is The Smallest"<< endl;
    }
    else if(c < a && c < b){
        cout << c << " Is The Smallest"<< endl;
    }
    else 
        cout << "It Seems You Wrote 0!"<< endl;
};
void main2() { //davalagot klebadobis mixedvit
    int a, b, c, smallest, mid, biggest;
    cout << "Type 3 Number: ";
    cin >> a, b, c, smallest, mid, biggest;
    if(a < b && b < c){
        smallest = a;
        mid = b;
        biggest = c;
        cout << biggest << mid << smallest << endl;
    }
    else if(b < a && a < c){
        smallest = b;
        mid = a;
        biggest = c;
        cout << biggest << mid << smallest << endl;
    }
    else if(c < a && a < b){
        smallest = c;
        mid = a;
        biggest = b;
        cout << biggest << mid << smallest << endl;
    }
    else
        cout << "Please Type Correct Numbers!" << endl;
}
int main() {
    main1();
    main2();
}


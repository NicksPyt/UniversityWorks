/* shemovitanot  N naturaluri ricxvi da vipovot 1 dan N amde yvela ricxvis sashualo aritmetikuli */
/* vipovot 9is jeradis sashualo aritmetikuli */
/* yvela luwi ricxvis sashualo aritmetikuli */
#include <iostream>  /*Nika Nozadze*/
#include <cmath>
using namespace std;
void main1() {           //1 dan N ricxvamde ricxvebis namravli
    int n, i, p = 0;  
    cout << "Type Any Number: ";
    cin >> n;
    for(i = 1; i <= n; i++){
        p = p + i;   
    }
    cout << "Result: " << p * n << endl;
}
void main2() {          //9is jeradis sashualo aritmetikuli
    int n, i, p = 0;
    cout << "Type Number: ";
    cin >> n;
    for(i = 1; i <= n; i++){
        if(i / 9)
        p = p + i;   
    }
    cout << p / n << endl; 
}
void main3() {          //luwi ricxvebis sashualo aritmetikuli           
    int n, i, p = 0;
    cout << "Type Number: ";
    cin >> n;
    for(i = 1; i <= n; i++){
        if(i / 2)
        p = p + i;   
    }
    cout << p / n << endl;
}
int main() {
    main1();
    main2();
    main3();
}
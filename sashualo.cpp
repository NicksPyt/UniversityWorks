#include <iostream>  //1) შემოვიტანოთ მთელი ტიპის n ელემენტიანი მასივი და ვიპოვოთ საშუალო არითმეტიკული რომელთა ერთეულოვან თანრიგზე მდგომი ციფრები არის 3
#include <cmath>     //2) შემოვიტანოთ მთელი ტიპის n ელემენტიანი მასივი და ვიპოვოთ კენტი ელემენტების საშუალო არითმეტიკულირი
#define n 6     
using namespace std;
void cifrta_jami() { // im elementebis jami romlis cifrta jami luwia
    int a[n], i, s = 0;
    for (i = 0; i < n; i++){
        cout << "a(" << i << ")= ";
        cin  >> a[i];
    }
    for (i = 0; i < n; i++){
        int x = a[i];
        int s1 = 0;
        while (x != 0){
            s1 = s1 + x % 10;
            x = x / 10;
        }
        if(s1 % 2 == 0){
            s = s + a[i];
        }  
    }
    cout << "Result: " << s;
    
}
void sashualo_aritmetikuli(){ //kent indeqsiani ricxvis sashualo aritmetikuli
    int a[n], i, s = 0, k = 0;
    for (i = 0; i < n; i++){
        cout << "a(" << i << ")= ";
        cin  >> a[i];
    }
    for(i = 1; i < n; i += 2) {//i = i + 2
    s += a[i];
    k++;
    }
    cout << "Result: " << s / k;
}
void shedgenili_ricxvebi() {  //shedgenili ricxvebis sashualo aritmetikuli
    int a[n], i, s = 0, k = 0, j;
    for (i = 0; i < n; i++){
        cout << "a(" << i << ")= ";
        cin  >> a[i];
    }
    for (i = 0; i < n; i++) {
        bool f = true;
        for(j = 2; j <= a[i] / 2 && f == true; j++){
            if(a[i] % j == 0) 
            f = false;
        }
        if(f == false) { //tu false eseigi shedgenilia tu true martivia
            s += a[i];
            k++;
        }
        cout << s / k;
    }
}
int main() {
    cifrta_jami();
    sashualo_aritmetikuli();
    shedgenili_ricxvebi();
}
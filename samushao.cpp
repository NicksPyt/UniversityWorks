#include <iostream> 
#include <cmath>
using namespace std;
#define n 4
int pirveli() {
    #include <iostream> 
#include <cmath>
using namespace std;
#define n 4
int sashualo_aritmetikuli(){ 
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
int main () {
    sashualo_aritmetikuli();
}
int meore() {
    #include <iostream> 
#include <cmath>
using namespace std;
int nakleboba(int x) {
    x = 2 * x + 5;
    cout << "Result: " << x;
}
int metoba(int x) {
    x = 3 * pow(x, 2) - 1;
    cout << "Result: " << x;
}
int main() {
    int y;
    cout << "Type Number: ";
    cin >> y;
    if(y < 0){
        nakleboba(y);
    }
    else
        metoba(y);
}
int mesame() {
    #include <iostream> 
#include <cmath>
using namespace std;
int main1(int a, int b, int c, int d){ 
    if(a < b && a < c && a < d){
        cout << a << " Is The Smallest"<< endl;
    }
    else if(b < a && b < c && b < d){
        cout << b << " Is The Smallest"<< endl;
    }
    else if(c < a && c < b && c < d){
        cout << c << " Is The Smallest"<< endl;
    }
    else if(d < a && d < b && d < c){
        cout << d << " Is The Smallest" << endl;
    }
    else 
        cout << " Is Seems You Wrote 0!"<< endl;
}
int main(){
    int a, b, c, d, m;
    cout << "Type 4 Number To Find Minimum: ";
    cin >> a >> b >> c >> d;
    m = main1(a, b, c, d);
}
int meotxe() {
    #include <cmath>
using namespace std;
#define n 4
int max() {
    int a[n], i;
    for (i = 0; i < n; i++) {
        cout << "a(" << i << ")= ";
        cin >> a[i];
    }
    for (i = 1; i < n; i++) {
        if(a[0] < a[i])
            a[0] = a[i];
    }
    cout << "Max Elementia: " << a[0] << endl;
}
int main(){
    max();
}

}
int sashualo() { //ბოლო
    int a[n], i, s = 0, k = 0;
    for (i = 0; i < n; i++){
        cout << "a(" << i << ")= ";
        cin  >> a[i];
    }
    for(i = 1; i < n; i += 2) {
    s += a[i];
    k++;
    }
    cout << "Result: " << s / k;
}

int main(){
    sashualo();
}
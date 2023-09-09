#include <iostream> //davadginot aris tu ara dadebiti, uaryofiti an nulovani masivis gamoyenebit
#include <cmath>
using namespace std;
int main() 
{
    int n = 10, a[10], i, s, p, k;
    s = 0;
    p = 1;
    k = 0;
    cout << "shevitanot masivis elementebis raodenoba: " << endl;
    for(i=0; i<n; i++)
    {
        cout << "a(" << i << ")= "; 
        cin >> a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i] > 0)
            p = p * a[i];
        else if(a[i] < 0)
            s = s + a[i];
            else 
            k = k + 1; 
    }
    cout << "Dadebitebis namravli: " << p << endl;
    cout << "uaryofitebis jami: " << s << endl;
    cout << "nulovani ricxvebis raodenoba: " << k;
}
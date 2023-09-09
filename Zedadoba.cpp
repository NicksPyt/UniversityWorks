#include <iostream>
#include <cmath>
using namespace std;
int main()
{   //zrdadobis mixedbit dalageba
    float a, b, c, z;
    cin >> a >> b >> c;
    if(a > b)
    {
        z=a; a=b; b=z;
    }
    if(b > c)
    {
        z=b; b=c; c=z;
    }
    if(a > b)
    {
        z=a; a=b; b=z;
    }
    cout << " " << a << " " << b << " " << c;

}
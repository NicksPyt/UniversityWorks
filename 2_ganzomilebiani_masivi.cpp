#include <iostream> //shemovitanot matrica da mtavar diagonalze mdgomi elementebis jami vipovot
#include <cmath>//aramtavari diagonalebis jamic
using namespace std;
int main() {
    int a[3][3], i, j;
    for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    cin >> a[i][j];
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
        cout << a[i][j] << " ";
        cout << endl;
   }
}
int main1() { // matricis jami
    int s, i, j, a[3][3];
    for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    cin >> a[i][j];
    for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    s = s + a[i][j];
    cout << s;
}
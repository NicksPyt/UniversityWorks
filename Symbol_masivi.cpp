#include <iostream>         //davadginot aris tu ara symboluri masivi dalagebuli funqciis meshveobit
using namespace std;
#define n 10
bool dalageba(char a[], int m) {
    for(int i = 0;  i < m; i++){
        if(!((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))) //if(2 == 2) udris  if(2 != 2) arudris // aris tu ar ashualedi
        return false;
    }
    for(int  i = 0; i < m - 1; i++){  // amowmebs aris tu ara dalagebuli (a, b, c...)
        if(a[i] > a[i + 1])
        return false;
    }
    return true;
}
main() {
    char a[n];
    int i;
    bool k;
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }
    k = dalageba(a, n);
    if(k == true){
        cout << "dalagebulia! ";
    }
    else 
        cout << "ar aris dalagebuli an ar shedgeba symboloebisgan! "; 
}
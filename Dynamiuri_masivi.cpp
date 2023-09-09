#include<iostream>
#include<math.h>
using namespace std;
// dinamiuri masivi
 main() {
    int size=0;
    cout<<"Type Size Of Array: "; 
    cin>>size;
    int *arr= new int[size];
    //elementebis  ricxvebit shevseba
    cout<<"Type Array: ";
    for(int i=0; i<size;i++) { 
        cin>>arr[i];
    }
    for(int i=0; i<size;i++) { //elementebis amobechdva
        cout << "Kvadratebi: " << arr[i] * arr[i] << "\t";
        cout << "All Array: " << arr[i]; //mexsierebis misamartebi, sadac ceria masivis elementebi
        cout << "Addreses: " << arr+i << "\t";  //ganmisamatebit elementebis bechdva
        cout << "Ganmisamarteba: " << *(arr+i) << endl;
    }
    delete [] arr; 
}

//davwerot programa romelic dinamiur failshi modzebnis yvela kenti elementis sashualo aritmetikuls
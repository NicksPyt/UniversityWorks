#include <iostream>
using namespace std;              //davaleba                                
int main(){
    const int size = 10;
    int max1, max2, arr[size];
    int box; //inaxavs cvlads droebit
    for(int i=0;i<size;i++){
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    max1=arr[0];
    max2=arr[1];
    if(max1>max2){
        box = max1;
        max1 = max2;
        max2 = box;
    }
    for(int i=2;i<size;i++){
        if(arr[i]>max1){
            max1=arr[i];
            if(max1 > max2){
                box=max1;
                max1=max2;
                max2=box;
            }
        }
    }
    cout<<"max1 = "<<max1<<endl;
    cout<<"max2 = "<<max2;
}
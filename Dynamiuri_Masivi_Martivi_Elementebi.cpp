#include<iostream>
#include<math.h>
using namespace std;
// dinamiuri masivi
//mocemul dinamiur masivshi vipovot martiv ricxvta raodenoba
void masivis_shevseba(int *const arr, const int size) {
	for(int i=0; i<size;i++)
		cin>>arr[i];
	}
void masivis_bechdva(int *const arr, const int size) {
	for(int i=0; i<size;i++)
	cout<<arr[i]<<"\t";
	cout<<endl;
}
void masivshi_martivebi(int *const arr, const int size) { 
	int i,j,k,n=0;
	for(i=0;i<size;i++) {
		if(arr[i]==2) 
			n=n+1; 
		else {
			k=0; 
			for(j=2;j<=arr[i]/2;j++) {
				if(arr[i]%j==0) {
					k=1;
					break;
				}
			}
			if(k==0) 
				n=n+1;
		}
	if (arr[i]==1) 
		n=n-1;
	}
	cout<<"\n masivshi martivi elementebis raodenoba="<<n<<endl;
}
main() {
	int size=0;cout<<"\n shemovitanot dinamiuri masivis zoma \n"; 
	cin>>size;
	int *arr= new int[size];
	//elementebis  ricxvebit shevseba
	cout<<"\n sheavset masivi \n";
	masivis_shevseba(arr,size);
	cout<<"\n masivis amobechdva \n";
	masivis_bechdva(arr,size);
	masivshi_martivebi(arr,size);
	delete [] arr;}


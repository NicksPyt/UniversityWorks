#include <iostream> //s = 1! + 2! + 3! + 4! + 5! ... + n!;
#include <cmath>    //shemovitanot n elementiani masivi da vipovot am masivis shedgenili elementebis ricxvebis jami
using namespace std;
int fact(int x) {
   int p = 1, i;
   for (i = 1; i < x; i++) {
      p = p * i;
   }
}
int sum(int x) {
   int s = 0;
   for (int i = 1; i < x; i++){
      s = s + fact(i);
   }
   return s;
}
int main() {
   int n;
   cout << "Type Number: ";
   cin >> n;
   int s = sum(n);
   cout << "Result: " << s;
}

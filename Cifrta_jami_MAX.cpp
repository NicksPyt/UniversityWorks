#include <iostream> //შემოვიტანოთ 4 მთელი რიცხვი და ვიპოვოთ თითოეული რიცხვის ციფრთა ჯამი
#include <cmath>    //და შემდეგ ამ ციფრთა ჯამებს შორის ვიპოვოთ უდიდესი
using namespace std;//ასევე მაქსიმუმის პოვნისას გამოვიყენოთ ფუნქციები
int sum(int x) {
    int s = 0;
    while(x != 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}
int maximumi(int x, int y) {
    if(x > y)
        return x;
    else 
        return y;
}
int main() {
    int x, x1, x2, x3, m, m1, m2, m3;
    cout << "Type 4 Number: ";
    cin >> x >> x1 >> x2 >> x3;
    m = sum(x);
    m1 = sum(x1);
    m2 = sum(x2);
    m3 = sum(x3);
    cout << "1) " << m << endl << "2) " << m1 << endl << "3) " << m2 << endl << "4) " << m3 << endl;
    int n = maximumi(m1, m);
    int n1 = maximumi(m2, m3);
    int n3 = maximumi(n, n1);
    cout << "Max: " << n3;
} 
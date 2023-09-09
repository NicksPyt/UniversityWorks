#include <iostream>  //მოცემულია სტრიქონი სადაც მეორდება სიმბოლოები
using namespace std; //ერთნაირი სიმბოლოების დადგენა
main() {
    string Str;
    int i, Str_size;
    cout << "\n Type Text: ";
    cin >> Str;
    Str_size = Str.size();
    for(i = Str_size - 1; i >= 1; i--)
        if(Str[i] == Str[i - 1])
            Str.erase(i, 1); //სიმბოლოლოს ამოშლა 
    cout << "Result: " << Str;
}
    cout << "Number Of String: " << size;
    for(int i = 0; i < size / 2; i++){
        if(Str[i] != Str[size - i - 1])
            j = 1;
        break;
    }
    if(j == 0) 
        cout << "\n Palindromia! ";
    else
        cout << "\n Ar Aris Palindromi! ";
}

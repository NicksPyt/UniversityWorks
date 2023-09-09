/*
   Davwerot programa romelic momxmarebels stxovs shemoitanos wamebis raodenoba.
    A) vicit rom wutshi aris 60wm tu shemotanili wamebis raodenoba aris meti 60-ze, mashin
    gamotanil iqnes wutebis da wamebis raodenoba.
    B) Tu vicit rom saatshi aris 3600 wami, tu momxmareblis mier shemotanili raodenoba metia vidre
    3600 gamoitanos wutebis da wamebis raodenoba
    C) tu vicit rom weliwadshi 86400 wami da momxmareblis mier shetanili wami metia am ricxvze
    mashin gamoitanos dgeebis raodenoba.
*/
#include <iostream>
#include <cmath>
using namespace std;
 main()
{   int x;
    int result1, result2, result22, result11, result33, result44, result111, result222, result333, result444;
    cout << "Type Your seconds: ";
    cin >> x;
    if(x > 0 && x < 3600){
        result1 = x / 60;
        result2 = x % 60;
        cout << result1 << " Minute And " << result2 << " Seconds!";
    }
    else if(x > 0 && x<86400){
        result11 = x / 3600;
        result22 = x % 3600;
        result33 = result22 / 60;
        result44 = result22 % 60;
        cout << result11 << " Hours, " << result22 << " Minute And " << result33 << " Seconds!";
    }
    else if(x > 86400){ 
        result111 = x / 86400;
        result222 = x % 86400; 
        result333 = result222 / 3600;
        result444 = result222 % 3600;
        cout << result111 << " Year, " << result222 << " Hour, " << result333 << " Minute And " << result444 << " Seconds! ";     
    }
    return main();
}

// davaleba gavaketot es CASE operatorit
// tan shevasworot kalkulatorit sizuste chvenit

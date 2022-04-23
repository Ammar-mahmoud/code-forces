#include <iostream>
using namespace std ;
int main(){
    int n = 0 , again ;
    string eqa ;
    cin >> again ;
    for (size_t i = 0; i < again; i++)
    {
        cin >> eqa ;
        if (eqa == "++X" || eqa == "X++")
            n++ ;
        else if (eqa == "--X" || eqa == "X--")
            n-- ;
    }
    cout << n ;
}
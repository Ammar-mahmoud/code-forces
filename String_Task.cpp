#include <iostream>
#include <string>
using namespace std ;

int main(){
    string str;
    cin >> str ;
    for (size_t i = 0; i < str.length(); i++)
    {
        if(str[i] <= 90)
            str[i] = str[i] + 32;
            
        if (str[i] != 'a' && str[i] != 'o' && str[i] != 'y' && str[i] != 'u' && str[i] != 'e' && str[i] != 'i' )
            cout << '.' << str[i];
    }
}



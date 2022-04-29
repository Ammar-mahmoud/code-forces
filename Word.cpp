#include <iostream>
#include <string>
using namespace std;

int main(){
    int low = 0  , upp = 0 ; 
    string str ;
    cin >> str ;

    for (size_t i = 0; i < str.length(); i++)
    {
        if(str[i] <= 90)
            upp++ ;
        else if (str[i] > 90)
            low++ ;
    }

    for (size_t i = 0; i < str.length(); i++)
    {
        if (upp <= low)
        {
            if(str[i] <= 90)
                str[i] = str[i] + 32;
        }

        else if (upp > low)
        {
            if(str[i] > 90)
                str[i] = str[i] - 32;
        }}
    cout << str ;
}
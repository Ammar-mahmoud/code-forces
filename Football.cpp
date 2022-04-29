#include <iostream>
#include <string>

using namespace std;
int main(){
    string str ;
    cin >> str ;
    if (str.length() >= 7)
    {
    for (size_t i = 0; i < str.length()-6; i++)
    {
        if ((str[i] == str[i+1]) && (str[i+2] == str[i]) && ( str[i] == str[i+3]) && (str[i+4] == str[i])&&
            (str[i+5]== str[i]) && (str[i] == str[i+6])){
                cout << "YES";
                return 0 ;
            }
    }}
    cout << "NO";
}
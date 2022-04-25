#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str ;
    int sum = str.length()  ;
    for (size_t i = 0; i < str.length(); i++)
    {
        for (size_t j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j]){
                sum-- ;
                break;
        }}
    }
    if (sum % 2 == 0)
        cout << "CHAT WITH HER!"  ;
    else 
        cout << "IGNORE HIM!" ;
}
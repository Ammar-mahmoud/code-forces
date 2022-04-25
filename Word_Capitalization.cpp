#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str ;

    if(str[0] > 90)
        str[0] = str[0] - 32;

    cout << str ;
}
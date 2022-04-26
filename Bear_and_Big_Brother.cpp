#include <iostream>
#include <string>
using namespace std;

int main(){
    int age1 , age2 , i = 0;
    cin >> age1 >> age2 ;
    for(i ; age1 <= age2 ; i++){
        age1 *= 3 ;
        age2 *= 2 ;
    }
    cout << i ;
}
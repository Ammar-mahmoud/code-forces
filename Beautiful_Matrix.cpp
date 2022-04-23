#include <iostream>
#include <cmath>
using namespace std ;

int main(){
    int arr[25];
    int n = 0 ;
    for (size_t i = 0; i < 25; i++)
    {
        cin >> arr[i] ;
    }

    for(n ; n < 25 ; n++){
        if (arr[n] == 1)
        {
            break;
        }}

    if(abs(n-12) == 0)
        cout << 0 ;

    else if(abs(n-12) == 1 || abs(n-12) == 5 )
        cout << 1 ;

    else if(abs(n-12) == 2 || abs(n-12) == 4 || abs(n-12) == 6 || abs(n-12) == 10)
        cout << 2 ;

    else if(abs(n-12) == 3 || abs(n-12) == 7 || abs(n-12) == 9 || abs(n-12) == 11)
        cout << 3 ;

    else 
        cout << 4 ;
}
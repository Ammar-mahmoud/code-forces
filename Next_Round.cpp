#include <iostream>
#include <cmath>
using namespace std ;
int main()
{
    int s = 0 , n ,k  ;
	cin >> n >> k ;
    int arr[50] = {0};
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i] ;       
    }
    for (size_t i = 0; i < n; i++)
    {
        if ((arr [i] >= arr[k - 1]) && (arr[i] != 0 ))
            s++ ;      
    }
	cout << s ;   
}
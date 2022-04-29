#include <iostream>
using namespace std;
int main(){
    int k , n , w , sum = 0;
    cin >> k >> n >> w ;

    for (size_t i = 0; i <= w; i++)
    {
        n = n - (i * k);
    }
    
    0 > n ? cout <<  -1 * n : cout << 0 ;
}
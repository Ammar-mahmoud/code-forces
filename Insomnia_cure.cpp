#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int k,l,m,n,d,counter = 0;
    cin >> k >> l >> m >> n >> d;
    if ( k == 1 || l == 1 || m  == 1 || n == 1 )
    {
        cout << d << endl ;
        return 0 ;
    }
    
    while(d > 0) 
    {
        if (d % k == 0 || d % l == 0 || d % m == 0 || d % n == 0  )
        {
            counter++;
        }
        d--;
    }
    cout << counter << endl;
}
#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int n , a ; cin >> n;
    while (n--)
    {
        cin >> a;
        if (a < 3)
        {
            cout << 0 << endl;
            continue;
        }    
        cout << (int)ceil(a/2.0) - 1 << endl ;
    }
    
}
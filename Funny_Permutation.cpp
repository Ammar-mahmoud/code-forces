#include <bits/stdc++.h>
using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
    more
    int t ; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        if (n == 1 || n == 3)
            cout << -1;
    
        else if (n%2)
        {
            for (size_t i = n; i > n/2 + 1; i--)
                cout << i << " " ;

            for (size_t i = 1; i <= n / 2 + 1; i++)
                cout << i << " " ;      
        }
        else
        {
            for (size_t i = n; i > 0; i--)
                cout << i << " " ;
        }
        cout << endl;
    }
}
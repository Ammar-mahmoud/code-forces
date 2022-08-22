#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int t , n , k , counter = 0; cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector <int>vec(n);
        for (size_t i = 0; i < n; i++)
        {cin >> vec[i];}

        for (size_t i = k ; i < n; i++)
        {
            if (k >= vec[i])
                counter++; 
        }

        cout << counter << endl;
        counter = 0;
    }
}
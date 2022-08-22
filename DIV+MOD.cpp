#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int t , l , r , a; cin >> t;
    while (t--)
    {
        int max1 = 0;
        cin >> l >> r >> a;
        max1 = max(max1 , (r/a)+(r%a));
        (r / a) * a - 1 >= l ? r = (r / a) * a - 1 : r = r;
        max1 = max(max1 , (r/a)+(r%a));
        cout << max1 << endl;
    }
}
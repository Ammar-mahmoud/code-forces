#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int n_input , x , y ;
    cin >> n_input;
    while (n_input--)
    {
        cin >> x >> y;
        x > y || y % x != 0 ? cout << 0 << " " << 0 << endl : cout << 1  << " " << y / x << endl ;
    }
}
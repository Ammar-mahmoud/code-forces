#include <bits/stdc++.h>
using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
    int t;cin>> t;
    while (t--)
    {
        int no1,do1,no2,do2; cin >> no1 >> do1 >> no2 >> do2;
        long long x = 1LL * no1 * do2;
        long long y = 1LL * no2 * do1;
        if (x == y) cout << 0 << endl;
        else if ((y && x % y == 0) || (x && y % x == 0)) cout << 1 << endl;
        else cout << 2 << endl;
    }}
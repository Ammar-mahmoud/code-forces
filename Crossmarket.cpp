#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int t ; cin >> t;
    int temp1,temp2;
    while (t--)
    {
        cin >> temp1 >> temp2;
        temp1 == 1 && temp2 == 1 ? cout << 0 << endl :cout << (max(temp1 , temp2) - 2) + min (temp1 , temp2) * 2 << endl;
    }
}

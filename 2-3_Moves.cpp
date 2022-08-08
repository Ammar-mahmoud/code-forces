#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int n , temp;
    cin >> n;
    while (n--)
    {
        cin >> temp;
        if (temp == 1)
            cout << 2 << endl;
        else
        {
            temp % 3 == 0 ? cout << (temp / 3) << endl : cout << (temp / 3) + 1 << endl;
        } 
    }
}
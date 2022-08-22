#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int n ;
    cin >> n;
    while (n--)
    {
        string str; char c; cin >> str; cin >> c;
        for (size_t i = 0; i < str.length(); i++)
        {
            if (str[i] == c && i % 2 == 0)
            {
                cout << "YES" << endl;
                goto NEW;
            }
            
        }
        cout << "NO" << endl;
        NEW:
        cout << "";   
    }
}
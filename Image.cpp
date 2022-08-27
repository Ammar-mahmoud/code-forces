#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int n; cin >> n;
    while (n--)
    {
        set <char> st;
        for (size_t i = 0; i < 4; i++)
        {
            char temp ; cin >> temp;
            st.insert(temp);
        }
        cout << st.size() - 1 << endl;
    }
}
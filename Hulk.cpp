#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        if (i % 2 == 0 && i != n -1 )
        {
            cout << "I hate that ";
        }
        else if (i % 2 == 1 && i != n -1 )
        {
            cout << "I love that ";
        }
        else if (i % 2 == 0)
        {
            cout << "I hate it";
        }
        else
        {
            cout << "I love it";
        }  
    }
}
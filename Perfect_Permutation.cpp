#include <bits/stdc++.h>
using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
    more
    int t ; cin >> t;
    while (t--)
    {
        int temp; cin >> temp;
        if(temp == 1)
        {
            cout << 1 << endl;
            continue;
        }
        else if (temp % 2 == 0){
        for (size_t i = 1; i < temp+1; i = i + 2)
        {
            cout << i + 1 << " " << i << " ";
        }
        }
        else{
            cout << temp << " ";
        for (size_t i = 2; i < temp - 1; i = i + 2)
        {
            cout << i + 1 << " " << i << " ";
        }
        cout << 1 << " " << temp - 1 ;
        }
        cout << endl;
    }
}
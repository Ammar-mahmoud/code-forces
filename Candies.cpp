#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int n_input , temp ;
    cin >> n_input;
    while (n_input--)
    {
        int mod = 3;
        cin >> temp;
        while (temp % mod != 0 )
        {
            mod += mod + 1;
        }
        cout << temp / mod << endl;
    }
}
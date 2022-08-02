#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int n_input ;
    long long int a , b;
    cin >> n_input;
    while (n_input--)
    {
        cin >> a >> b;
        if (a < 1)
        {
            cout <<  1 << endl;
        }
        if (a >= 1)
        {
            cout << a + b * 2 + 1 << endl; 
        }
    }
}
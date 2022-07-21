#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int num, n_input ;
    cin >> n_input;
    while (n_input--)
    {
    cin >> num ;
    if (num - 2 * ceil(num / 3.0) -1 == 0)
    {
        cout << ceil(num / 3.0) - 1 << " " << ceil(num/3.0) + 1 << " " << num - 2 * ceil(num / 3.0)   << endl;  
    }
    else
    {
        cout << ceil(num / 3.0) << " " << ceil(num/3.0) + 1 << " " << num - 2 * ceil(num / 3.0) -1  << endl;
    }}}
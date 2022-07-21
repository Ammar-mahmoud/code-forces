#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int num , l_sum , r_sum;
    string temp;
    cin >> num ;
    while (num--)
    {
        cin >> temp;
        l_sum = (int)temp[0] + (int)temp[1] + (int)temp[2] ;
        r_sum = (int)temp[3] + (int)temp[4] + (int)temp[5] ;
        if (r_sum == l_sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int num , temp_first , temp_sec , len = 1 , max = 1;
    cin >> num ;
    cin >> temp_first;

    if (num == 1)
    {
        cout << 1;
        return 0;
    }
    
    for (size_t i = 0; i < num-1; i++)
    {
        cin >> temp_sec;
        if (temp_first > temp_sec)
        {
            temp_first = temp_sec;
            len = 1 ;
            continue;
        }

        len ++;
        if (len > max)
        {
            max = len;
        }
        temp_first = temp_sec;
    }

    cout << max;
}
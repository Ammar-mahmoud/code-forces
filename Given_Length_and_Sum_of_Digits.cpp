#include <bits/stdc++.h>
using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
    more
    int len , sum; cin >> len >> sum;
    int temp = sum;
    vector <int> vec(len); vec[0] = 1; sum--;
    if (sum == -1 && len == 1)
    {
        cout << "0 0";
        return 0;
    }
    if (sum == -1 || len * 9 < sum + 1 )
    {
        cout << "-1 -1";
        return 0;
    }
    for (size_t i = len - 1; i > 0; i--)
    {
        if(sum >= 9)
        {
            
            vec[i] = 9;
            sum = sum - 9;
        }
        else
        {
            vec[i] = sum;
            sum = 0; 
        }
    }
    if (sum > 0) vec[0] = sum + 1;
    for (size_t i = 0; i < len; i++)
    {
        cout << vec[i];
    }
    cout << " ";
    for (size_t i = 0; i < len; i++)
    {
        if (temp >= 9)
        {
            cout << 9;
            temp = temp - 9;
        }
        else 
        {
            cout << temp;
            temp = 0; 
        }
    }
}
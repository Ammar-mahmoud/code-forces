#include <bits/stdc++.h>
using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
    more
    map <char , int> m {{'S',-1} , {'M',0} , {'L',1}, {'X',2}};
    int t ; cin >> t;
    while (t--)
    {
        string str1 ,str2;cin >> str1 >> str2;
        long long sum1 = 1 , sum2 = 1;
        for (size_t i = 0; i < str1.length(); i++)
            sum1 = sum1 * m[str1[i]];
        
        for (size_t i = 0; i < str2.length(); i++)
            sum2 = sum2 * m[str2[i]];
        
        if (sum1 > sum2)
            cout << '>' << endl;
        
        else if (sum1 == sum2)
            cout << '=' << endl;
        
        if (sum1 < sum2)
            cout << '<' << endl;
    }
}
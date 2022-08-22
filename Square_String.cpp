#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    string str; int t ;cin >> t;
    while (t--)
    {
        bool is_square = true;
        cin >> str ;

        if (str.length() % 2 != 0)
            is_square = false;

        for (size_t i = 0; i < str.length()/2 ; i++)
        {
            if (str[i] != str[i + str.length()/2])
            {
                is_square = false;
            }}
            
        is_square ? cout << "YES" << endl : cout << "NO" << endl ;
        
    }}
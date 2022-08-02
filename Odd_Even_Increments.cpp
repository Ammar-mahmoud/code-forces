#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int n_input , temp_1 , temp_2 , temp , size ;
    bool check = true;
    cin >> n_input;
    while(n_input--)
    {
        cin >> size;
        cin >> temp_1 >> temp_2;
        for (int i = 0; i < size - 2; i++ )
        {
            if (i % 2 == 0)
            {
                cin >> temp;
                if (temp % 2 != temp_1 % 2)
                {
                    check = false;
                }
            }
            if (i % 2 == 1)
            {
                cin >> temp;
                if (temp % 2 != temp_2 % 2)
                {
                    check = false;
        }}}

        if (check)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        check = true; 
    }}
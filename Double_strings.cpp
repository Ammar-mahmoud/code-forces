#include <bits/stdc++.h>
using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
    int t , size;cin>> t;
    while (t--)
    {
        cin >> size;
        vector <string> vec(size);
        set <string> st;
        for (size_t i = 0; i < size; i++)
        {
            cin >> vec[i];
            st.insert(vec[i]);
        }
        for (size_t i = 0; i < size; i++)
        {
            bool finish = false;
            if (vec[i].length() == 1)
            {
                cout << 0;
                continue;
            }
            for (size_t j = 0; j < vec[i].length(); j++)
            {
                string lift = vec[i].substr(0 , j);
                string right = vec[i].substr(j , vec[i].length());
                if (st.count(lift) && st.count(right))
                {
                    cout << 1 ;
                    finish = true;
                    break;
                }}
            if (! finish) cout << 0;
        }
        cout << endl; 
    }}
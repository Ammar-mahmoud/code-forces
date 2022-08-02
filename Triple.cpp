#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int n_input , temp , size ;
    cin >> n_input;
    map <int,int> ma;
    
    while (n_input--)
    {
        cin >> size;
        for (size_t i = 0; i < size; i++)
        {
            cin >> temp;
            if (ma.count(temp))
            {
                ma[temp]++;
            }
            else
            {
                ma[temp] = 1;
            }
        }
        for (auto it : ma)
        {
            if (it.second >= 3)
            {
                cout << it.first << endl;
                goto START;
            }
            
        }
        cout << -1 << endl;
        START: 
        ma.clear();
    }
}
#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int t , size , temp; cin >> t;
    while (t--)
    {
        cin >> size;
        vector <int> vec;
        for (size_t i = 0; i < size; i++)
        {
            cin >> temp ;
            vec.push_back(temp);
        }
        cout << *max_element(vec.begin() , vec.end()) - *min_element(vec.begin() , vec.end()) << endl;
    }
}
#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int n , temp; cin >> n;
    while (n--)
    {
        cin >> temp;
        vector<int> vec(temp);
        for (size_t i = 0; i < temp; i++)cin >> vec[i];
        sort(vec.begin() , vec.end());
        cout << vec[temp -1] + vec[temp - 2] - vec[0] - vec[1] << endl;   
    }
}
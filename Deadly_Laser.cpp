#include <bits/stdc++.h>
using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
    more
    int n; cin >> n;
    while (n--)
    {
        pair<int,int> base({1,1});
        pair<int,int> to_go;cin >> to_go.first >> to_go.second;
        pair<int,int> laser;cin >> laser.first >> laser.second ;
        int d , count = to_go.first + to_go.second  - 2; cin >> d;
        if((laser.first - d <= 1|| laser.second + d >= to_go.second) && ((laser.first + d >= to_go.first|| laser.second -  d <= 1)))
        {
            cout << -1 << endl;
            continue;
        }
        cout << count << endl;
    }
}
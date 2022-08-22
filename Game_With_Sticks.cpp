#include <bits/stdc++.h>
using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
    more
    int n, m ; cin >> n >> m;
    min(n , m) % 2 == 1 ? cout << "Akshat" : cout << "Malvika";
}
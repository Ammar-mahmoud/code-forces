#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    long long temp , t;cin >> t;
    while(t--)
    {
        set <long long> st;cin >> temp;
        cout << (long long)sqrt(temp) + (long long)cbrt(temp) - (long long)sqrt((long long)cbrt(temp))<< endl;      
    }
}
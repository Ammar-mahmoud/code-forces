#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int n,a,b,c;cin>>n>>a>>b>>c;
    int dp[n+1];
    dp[0]=0;
    int x,y,z;
    for(int i=1; i<=n; i++)
    {
        x=-10000,y=-10000,z=-10000;
        if(i>=a)
            x=dp[i-a];
        if(i>=b)
            y=dp[i-b];
        if(i>=c)
            z=dp[i-c];
        dp[i]=1+max(z,max(x,y));
    }
    cout<<dp[n];
}
#include<bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main(){
    more
    long long int n , m;
    cin >> n >> m;

    if(n == 1){
        cout << 1;
        return 0;
    }

    else if(n == m){
        if (n%2 == 1)
        {
            cout << n -1;
            return 0;
        }
        else{
            cout << n;
            return 0;
        }}
    
    else
    {
        if (m > ((n-1)/2)+1)
        {
            cout << (m - 1 - (n-1)/2)*2;
            return 0;
        }
        else if (m <= ((n-1)/2)+1)
        {
            cout << (m -1) * 2 + 1;
            return 0;
        }}}

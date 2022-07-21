#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int money , counter = 0;
    cin >> money;
    cout << (money / 100) + ((money % 100)/20) + ((money%20) / 10) + (money % 10) / 5 + (money % 5) ;
}
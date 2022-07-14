#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int nums, each;
    cin >> nums;
    double sum = 0  ;
    for (size_t i = 0; i < nums; i++)
    {
        cin >> each;
        sum = sum + each;
    }
    
    cout << sum / nums;
}
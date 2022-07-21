#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int num, counter = 0;
    cin >> num;
    while (num > 0)
    {
        if (num % 2 == 1)
        {
            counter++;
        }
        num = num / 2;
    }
    cout << counter ;
}
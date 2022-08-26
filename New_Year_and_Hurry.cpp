#include <bits/stdc++.h>
using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
    more
    int problems ,sum = 5 , counter = 0 , mints ; cin >> problems >> mints ;
    while (counter < problems && (sum*(5+sum)/10)+mints <= 240)
    {
        counter++;
        sum += 5;
    }
    cout << counter ;
}
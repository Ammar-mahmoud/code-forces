#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    long long int homes , tasks , last = 1 , counter = 0 , temp;
    cin >> homes >> tasks;
    while (tasks--)
    {
        cin >>  temp;
        if (temp >= last)
        {
            counter = counter + temp - last;
        }
        else if (temp < last)
        {
            counter = counter + homes + temp - last;
        }
        last = temp;
    }
    cout << counter;
}
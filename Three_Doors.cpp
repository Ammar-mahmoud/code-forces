#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int t;cin >> t;
    while(t--)
    {
        int counter = 0 ,key1 ,key2 ,key3 ,temp; cin >> temp;
        map <int,int> ma;
        cin >> key1 >> key2 >> key3;
        ma[1] = key1;ma[2] = key2;ma[3] = key3;
        while (temp != 0)
        {
            temp = ma[temp];
            counter++;
        }
        counter == 3 ? cout << "YES" << endl : cout << "NO" << endl;
    }
}
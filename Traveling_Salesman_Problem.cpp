#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int n ,  size;
    cin >> n;
    while (n--)
    {
        int min1 = 0 , min2 = 0 , max1 = 0 , max2 = 0 , temp1 , temp2;
        long long sum;
        cin >> size;
        for (size_t i = 0; i < size; i++)
        {
            cin >> temp1 >> temp2;
            min1 = min(min1,temp1);
            min2 = min(min2,temp2);
            max1 = max(max1,temp1);
            max2 = max(max2,temp2);
        }
        sum = abs(min1) * 2 + abs(min2) * 2 + max1 * 2 + max2 * 2;
        cout << sum << endl ;
    }
}
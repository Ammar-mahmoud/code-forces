#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int t ; cin >> t;
    while (t--)
    {
        long long size , maqam , lsum , sum , mod;cin >> size >> maqam >> lsum >> sum;
        long long arr[size] = {0};
        mod = sum - lsum * maqam; arr[0] = lsum * maqam;
        for (size_t i = 0; i < size; i++)
        {
            arr[i] = arr[i] + min(mod, maqam - 1);
            mod = mod - min(mod , maqam - 1);
        }
        if (sum == 0 && lsum == 0)
        {
            for (size_t i = size - 1; i < -1; i--)
            {
                cout << 0 << " ";
            }
            cout << endl;
        }
        else if (mod != 0 || sum / maqam < lsum)
        {
            cout << -1 << endl;
        }
        else
        {
            for (size_t i = size - 1; i < -1; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }}}
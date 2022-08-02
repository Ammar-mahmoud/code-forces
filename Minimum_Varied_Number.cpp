#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int n_input , num ;
    cin >> n_input;
    vector <int> sum;
    while (n_input--)
    {
        cin >> num;
        for (int i = 9; i > 0; i--)
        {
            if (num - i >= 0)
            {
                num = num - i;
                sum.push_back(i);
                if(num == 0)
                {
                    break;
                }
            }
        }
        for (int i = sum.size() - 1 ; i > -1; i--)
        {
            cout << sum[i];
        }
        cout << endl;
        sum.clear();
    }
}
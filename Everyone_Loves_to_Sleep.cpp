#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int n_input ,n, H ,M ,hi , mi , sum;
    vector <int> vec;
    cin >> n_input;
    while (n_input--)
    {
        cin >> n >> H >> M ;
        for (size_t i = 0; i < n ; i++)
        {
            cin >> hi >> mi;
            if (hi * 60 + mi < H *60 +M)
            {
                vec.push_back(1440 - (H * 60 + M) + (hi*60+mi));
            }
            else if (hi*60 + mi > H *60 +M)
            {
                vec.push_back((hi*60+mi) - (H * 60 + M));
            }
            else
            {
                vec.push_back(0);
            }
           
            } 
        sum = *min_element(vec.begin() , vec.end());
        cout << sum / 60 << " " << sum % 60 << endl;
        vec.clear();
    }
}
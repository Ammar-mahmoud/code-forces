#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int n , temp, size;
    cin >> n;
    while (n--)
    {
        cin >> size;
        vector <int> vec;
        for (size_t i = 0; i < size; i++)
        {
            vec.push_back(i + 1);
        }
        cout << size << endl;
        for (size_t i = 0; i < size; i++)
        {
            for (size_t j = 0; j < size; j++)
            {
                cout << vec[j] << " ";
            }
            cout << endl;
            swap(vec[size-1] , vec[i]);
        }  
    }
}
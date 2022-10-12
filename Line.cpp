#include <bits/stdc++.h>
using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
    more
    int t ; cin >> t;
    while (t--)
    {
        long long size ,order = 0 , counter = 0 , j = 0 , dif = 0 ; cin >> size;
        string ch; cin >> ch;
        for (size_t i = 0; i < size; i++)
        {
            if (ch[i] == 'L')
            {
                counter = counter + i ;
            }
            else if(ch[i] == 'R')
            {
                counter = counter + size - i - 1;
            }
        }
        vector <long long> vec(size , counter);
        for (size_t i = 1; i <= size; i++)
        {
            while (order <= i && j < size / 2)
            {
                if(ch[j] == 'L')
                {
                    ch[j] = 'R';
                    dif = dif - 2 * j - 1 + size ;
                    order++;
                    if (order >= i)
                    {
                        break;
                    } 
                }
                if(ch[size - j - 1] == 'R')
                {
                    ch[size - j - 1] = 'L';
                    dif = dif + size + 2 * (- j) - 1 ;
                    order++;
                    if (order >= i)
                    {
                        break;
                    } 
                }
                j++;
                
                
            }
            cout << vec[i-1] + dif << " " ;
        }
        cout << endl;
    }
}
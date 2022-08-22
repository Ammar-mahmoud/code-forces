#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    long long ans , t1 , t2 , temp ; cin >> t1 >> t2;
    vector <int> origin_vec;
    for (size_t i = 0; i < t1; i++)
    {
        cin >> temp ;
        origin_vec.push_back(temp);
    }
    ans = t1 * (t1+1)/2;
    for (size_t i = 1; i < t1; i++)
    {
        if (origin_vec[i] != origin_vec[i - 1])
        {
            ans = ans + i * (t1 - i);
        }
        
    }
    
    while (t2--)
    {
        int place , new_val; cin >> place >> new_val;
        place--;
        if (place - 1 >= 0)
        {
            if (origin_vec[place] != origin_vec[place - 1])
            {
                ans = ans - place *(t1-place);
            }
                
        }
        if (place + 1 < t1)
        {
            if (origin_vec[place] != origin_vec[place + 1])
            {
                ans = ans - (place+1) *(t1-(place+1));
            }
        }
        origin_vec[place] = new_val;
         if (place - 1 >= 0)
        {
            if (origin_vec[place] != origin_vec[place - 1])
            {
                ans = ans + place *(t1-place);
            }  
        }
        if (place + 1 < t1)
        {
            if (origin_vec[place] != origin_vec[place + 1])
            {
                ans = ans + (place+1) *(t1-(place+1));
            }
        }
        cout << ans << endl;
    }
}
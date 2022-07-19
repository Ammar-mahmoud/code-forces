#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int n_input, temp_1 , temp_2, counter = 0 ;
    cin >> n_input;
    vector <int> home_uniform;
    vector <int> guest_uniform;
    for (size_t i = 0; i < n_input; i++)
    {
        cin >> temp_1 >> temp_2;
        home_uniform.push_back(temp_1);
        guest_uniform.push_back(temp_2);
    }
    for(auto it : home_uniform)
    {
        for(auto it_2 : guest_uniform)
        {
            if (it == it_2)
                counter ++;
        }
    }
    cout << counter;
}
#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int n_input , temp , max_place , min_place ;
    cin >> n_input;
    vector <int> vec ;
    for (size_t i = 0; i < n_input; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }
     
    for (size_t i = 0; i < n_input; i++)
    {
        if (vec[i] == *max_element(vec.begin(),vec.end()))
        {
            max_place = i + 1;
            break;
        }  
    }

    for (size_t i = n_input - 1; i < -1; i--)
    {
        if (vec[i] == *min_element(vec.begin(),vec.end()))
        {
            min_place = i + 1;
            break;
        } 
    }
    
    if (max_place > min_place )
    {
        max_place-- ;
        min_place =  n_input - min_place;
        cout << max_place + min_place - 1;
    }
    else
    {
        max_place-- ;
        min_place =  n_input - min_place;
        cout << max_place + min_place;
    }
}
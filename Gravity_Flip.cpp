#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int num , temp;
    cin >> num ;
    vector <int> vec ;
    for (size_t i = 0; i < num; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    for (size_t i = 0; i < num; i++)
    {
        cout << vec[i] << " ";
    }
    
    
}
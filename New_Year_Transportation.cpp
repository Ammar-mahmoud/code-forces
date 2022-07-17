#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int n_input , turn , temp, sum = 0 , i = 1;
    cin >> n_input >> turn;

    vector <int> vec;
    for (size_t i = 0; i < n_input-1; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    while (i < turn)
    {
        i = i + vec[i-1] ;
        if (i == turn){
            cout << "YES";
            return 0 ;
        }
    }
    cout << "NO";    
}
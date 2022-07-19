#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int n_input , temp_a , temp_b , counter = 0;
    cin >> n_input;
    for (size_t i = 0; i < n_input; i++)
    {
        cin >> temp_a >> temp_b;
        temp_a % temp_b ? cout << temp_b - (temp_a % temp_b) << endl: cout << 0 << endl;
        counter = 0;
    }
}
#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int n_input , temp ;
    cin >> n_input;
    while(n_input--)
    {
        cin >> temp;
        if (temp >= 1900)
        {
            cout << "Division 1" << endl;
        }
        else if (temp >= 1600)
        {
            cout << "Division 2" << endl;
        }
        else if (temp >= 1400)
        {
            cout << "Division 3" << endl;
        }
        else 
        {
            cout << "Division 4" << endl;
        }
        
    }
}
#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int n_input , temp , size ;
    cin >> n_input;
    vector <int> vec;
    while (n_input--)
    {
        cin >> size;
        for (size_t i = 0; i < size; i++)
        {
            cin >> temp;
            vec.push_back(temp);
        }
        if (size == 1)
        {
            vec[0] == 1 ? cout << "YES" << endl : cout << "NO" << endl;
            goto START;
        }
        sort(vec.begin(),vec.end());
        if (vec[size -1] - vec[size-2] > 1)
        {
            cout << "NO" << endl;
            goto START;
        } 
        
        cout << "YES" << endl;
        START:
        vec.clear();
    }
}
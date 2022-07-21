#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int num , terms , temp, counter = 0, min;
    vector <int> vec;
    cin >> num ;
    while (num--)
    {
        cin >> terms;
        for (size_t i = 0; i < terms; i++)
        {
            cin >> temp;
            vec.push_back(temp);
        }
        min = *min_element(vec.begin(),vec.end());
        for (size_t i = 0; i < terms; i++)
        {
            if (vec[i] > min)
            {
                counter += (vec[i] - min);
            }  
        }
        cout << counter << endl ;
        counter = 0;
        vec.clear();
    }
}
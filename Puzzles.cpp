#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

int main(){
    int n , m , temp , small;
    vector <int> vec;
    cin >> n >> m;

    for (size_t i = 0; i < m; i++)
    {
        cin >> temp ;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end());
    small = vec[n-1] - vec[0];

    for (size_t i = 0; i < m-n; i++)
    {
        if (vec[n+i] - vec[i+1] < small)
        {
            small = vec[n+i] - vec[i+1];
        }
        
    }

    cout << small ;
}
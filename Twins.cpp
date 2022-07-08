#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

int main(){
    int n, temp , counter = 0 , sum = 0 ;
    vector <int> vec;
    cin >> n ;

    for (size_t i = 0; i < n; i++)
    {
        cin >> temp ;
        vec.push_back(temp);
        sum += temp;
    }
    
    sort(vec.begin(), vec.end());

    for (size_t i = n-1; i < -1; i--)
    {
        counter += vec[i];
        if (counter > sum / 2)
        {
            cout << n-i ;
            return 0 ;
        }
        
    }
}

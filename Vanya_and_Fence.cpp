#include <iostream>
#include <vector>

using namespace std ;

int main(){
    int n, h, temp , counter = 0 ;
    vector <int> vec;
    cin >> n >> h ;

    for (size_t i = 0; i < n; i++)
    {
        cin >> temp ;
        vec.push_back(temp);
    }

    for (size_t i = 0; i < n; i++)
    {
        counter += 1;
        if (vec[i] > h)
        {
            counter++ ;
        }
    }
    cout << counter ;
}
#include <iostream>
#include <vector>

using namespace std ;

int main(){
    int n, temp , counter = 0 ;
    vector <int> vec;
    cin >> n ;

    for (size_t i = 0; i < 2* n; i++)
    {
        cin >> temp ;
        vec.push_back(temp);
    }

    for (size_t i = 0; i < 2 * n; i+=2)
    {
        if (vec[i+1] - vec[i] >= 2)
        {
            counter++;
        }
        
    }
    cout << counter;
}
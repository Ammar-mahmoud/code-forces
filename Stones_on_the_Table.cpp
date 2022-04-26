#include <iostream>
#include <string>
using namespace std;

int main(){
    int num , sum = 0 ;
    string stones ;

    cin >> num ;
    cin >> stones ;

    for (size_t i = 0; i < stones.length(); i++)
    {
        if (stones[i] == stones[i+1])
            sum++ ;
    }
    
    cout << sum ;
}
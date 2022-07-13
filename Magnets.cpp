#include <iostream>
#include <vector>

using namespace std;

int main(){
    int nums, base, counter = 1, b;
    cin >>nums;
    cin >> base;

    for (size_t i = 0; i < nums-1; i++)
    {
        cin >> b;
        if (b != base)
        {
            counter++;
            base = b;
        }
        
    }
    cout << counter;
}
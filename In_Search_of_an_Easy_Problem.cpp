#include <iostream>

using namespace std;

int main(){
    int n , b , c = 0;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> b;
        if (b == 1)
        {
            c = 1;
        }   
    }
    c == 1 ? cout << "HARD" : cout << "EASY";
}
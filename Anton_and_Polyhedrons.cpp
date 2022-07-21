#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int num ,counter = 0;
    cin >> num;
    string temp;
    while(num--)
    {
        cin >> temp;
        if (temp == "Tetrahedron")
        {
            counter = counter + 4;
        }
        if (temp == "Cube")
        {
            counter = counter + 6;
        }
        if (temp == "Octahedron")
        {
            counter = counter + 8;
        }
        if (temp == "Dodecahedron")
        {
            counter = counter + 12;
        }
        if (temp == "Icosahedron")
        {
            counter = counter + 20;
        }
    }
    cout << counter;
}
#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    string name ;cin >> name;
    for (size_t i = 0; i < name.length(); i++)
    {
        name[i] = tolower(name[i]);
    }
    
    map <string , string> ma;ma["ali"] = "rashad"; ma["ehab"] = "bekh"; ma["mona"] = "naguib";
    
    if (ma.count(name))
    {
        cout <<ma[name];
    }
    else
    {
        cout << "no one won";
    }
}

#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    string str1 ,str2 , str3 = "";
    cin >> str1 >> str2;
    for (size_t i = 0; i < str1.length(); i++)
    {
        if (str1[i] == str2[i]){
            str3 = str3 + '0';
        }
        else
        {
            str3 = str3 + '1';
        }
    }
    cout << str3;
}
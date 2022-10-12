#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n,z;
    cin >> n;
    vector<int>vec(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        sum += vec[i] / 2;
    }
    if (sum > 0) {
        int i = 0;
        while (sum != 0 && i < n)
        {
            if (vec[i] % 2 == -1 )
            {
                vec[i]--;sum--;
            }i++;}}     
    else {
        int i = 0;
        
        while (sum != 0 && i < n)
        {
            if (vec[i] % 2 == 1 )
            {
                vec[i]++;sum++;
            }i++;}} 
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] / 2 << endl;
    }
    }
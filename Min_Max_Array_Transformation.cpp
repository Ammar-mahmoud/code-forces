#include <bits/stdc++.h>
using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
    more int t; cin >> t;
    while (t--)
    {
        int size; cin >> size;
        vector <int> a(size);vector<int>b(size);
        for (size_t i = 0; i < size; i++){ cin >> a[i];}
        for (size_t i = 0; i < size; i++){ cin >> b[i];}
        for (int i = 0, j = 0; i < size; i++) {
            while (b[j] < a[i]) {
                j++;
            }
            cout << b[j] - a[i] << " ";
        }
        cout << endl;
        for (int i = 0, j = 0; i < size; i++) {
            j = max(j, i);
                while (j + 1 < size && a[j + 1] <= b[j]) {
                    j++;
                }
            cout << b[j] - a[i] << " ";
        } 
        cout << endl; 
    }
}
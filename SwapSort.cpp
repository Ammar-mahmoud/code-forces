#include <bits/stdc++.h>
using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
    more
    long long temp , n ; cin >> n;
    vector <long long> unsorted(n) , sorted(n) ;vector<pair<int,int>> places;
    for (size_t i = 0; i < n; i++)
    {
        cin >> temp;
        unsorted[i] = temp;
        sorted[i] = temp;
    }
    sort(sorted.begin() , sorted.end());
    for (size_t i = 0; i < n; i++)
    {
        if (unsorted[i] != sorted[i])
        {
            auto it = find(unsorted.begin()+i , unsorted.end() , sorted[i]);
            swap(unsorted[i],*it);
            places.push_back(make_pair(i , it - unsorted.begin()));
        }
    }
    cout << places.size() << endl;
    for (size_t i = 0; i < places.size(); i++)
    {
        cout << places[i].first << " " << places[i].second << endl;
    }
}
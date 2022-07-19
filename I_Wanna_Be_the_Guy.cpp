#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main(){
    more
    int n_levels , level_1 , level_2 , temp;
    set <int> st;
    cin >> n_levels;
    cin >> level_1;
    for (size_t i = 0; i < level_1; i++)
    {
        cin >> temp;
        st.insert(temp);
    }
    cin >> level_2;
    for (size_t i = 0; i < level_2; i++)
    {
        cin >> temp;
        st.insert(temp);
    }
    if (n_levels == st.size())
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}
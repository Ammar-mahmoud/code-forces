#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int fun1(vector <vector<int>> vec, int row, int col) {
    int value = 0;
    if (col >0 && row>0 )
    {
        col--;
        row--;
        value += vec[row][col];
        value += fun1(vec, row , col );
    }
    return value;
}

int fun2(vector <vector<int>> vec, int row, int col) {
    int value = 0;
    if (col < vec[0].size() - 1 && row >0)
    {
        col++;
        row--;
        value += vec[row][col];
        value += fun2(vec, row , col );
    }
    return value;
}


int fun3(vector <vector<int>> vec, int row, int col) {
    int value = 0;
    if (col < vec[row].size()-1 && row < vec.size()-1)
    {
        col++;
        row++;
        value += vec[row][col];
        value += fun3(vec, row , col );
    }
    return value;
}

int fun4(vector <vector<int>> vec, int row, int col) {
    int value = 0;
    if ( row < vec.size()-1 && col > 0 )
    {
        row++;
        col--;
        
        value += vec[row][col];
        value += fun4(vec, row , col );
        
    }
    return value;
}

int score(vector <vector<int>> vec, int row, int col)
{
    int sum = fun1(vec, row, col) + fun2(vec, row, col) + fun3(vec, row, col) + fun4(vec, row, col);
    return sum ;
}

int main() {
    more
    int n_input , temp , row , col;
    cin >> n_input;
    vector <vector<int>> vec;
    vector <int> small_vec;
    vector <int> result;
    
    while (n_input--)
    {
        cin >> row >> col;
        row--;
        col--;
        for (size_t i = 0; i < row+1; i++)
        {
            for (size_t j = 0; j < col+1; j++)
            {
                cin >> temp;
                small_vec.push_back(temp);
            }
            vec.push_back(small_vec);
            small_vec.clear() ;
        }

        for (size_t i = 0; i < row+1; i++)
        {
            for (size_t j = 0; j < col+1; j++)
            {
                temp = score(vec,i,j) + vec[i][j];
                result.push_back(temp);
            }
        }
        cout << *max_element(result.begin(),result.end()) << endl;
        vec.clear();
        result.clear();
    }
}
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int counter(string str , int size){
    int up = 0 , low = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (str[i] == 'D')
        {
            low++;
        }
        else {
            up++;
        } 
    }
    return (low - up);
}

int main ()
{
    int num ,size , move , temp;
    string mov_str;
    cin >> num ;
    vector <int> small_vec;
    vector <vector<int>> big_vec;

    while (num > 0)
    {
        num--;
        cin >> size;
        for (size_t i = 0; i < size; i++)
        {
            cin >> temp;
            small_vec.push_back(temp);
        }
        
        for (size_t i = 0; i < size; i++)
        {
            cin >> move;
            cin >> mov_str;
            small_vec[i] += counter(mov_str , move);
            while (small_vec[i] > 9)
            {
                small_vec[i] -= 10;
            }
            while (small_vec[i] < 0)
            {
                small_vec[i] += 10;
            }
        }
        big_vec.push_back(small_vec);
        small_vec.clear();
    }
    for (size_t i = 0; i < big_vec.size(); i++)
    {
        for (size_t j = 0; j < big_vec[i].size(); j++)
        {
            cout << big_vec[i][j] << " ";
        }
        cout << endl;
    }   
}
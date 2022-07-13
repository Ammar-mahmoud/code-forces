#include<iostream>
#include<vector>
#include <cmath>

using namespace std;

vector <int> rows;
vector <int> result;
vector <vector<int>> colom;
vector <vector<int>> sec_tmp;

void mirror( vector<vector<int>>& sec_vec , int size){
    for (int i = 0; i < size / 2; i++) {
        for (int j = i; j < size - i - 1; j++) {
            int temp = colom[i][j];
            sec_vec[i][j] = colom[size - 1 - j][i];
            sec_vec[size - 1 - j][i] = colom[size - 1 - i][size - 1 - j];
            sec_vec[size - 1 - i][size - 1 - j] = colom[j][size - 1 - i];
            sec_vec[j][size - 1 - i] = temp;
        }
    }
           
}

void dif (int & c, int size , vector<vector<int>>& sec_vec ,vector<vector<int>>& colom){
    // for (size_t i = 0; i < size; i++)
    // {
    //     for (size_t j = 0; j < size; j++)
    //     {
    //         cout << sec_vec[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = i; j < size; j++)
        {
            if (colom[i][j] != sec_vec[i][j])
            {
                c++;
                colom[i][j] = 1;
                sec_vec[i][j] = 1;
            }
        }
    }
}

int main(){
    int num , size , temp , counter = 0 , small_temp;
    cin >> num ;
    while (num > 0)
    {
        num--;
        cin >> size;
        if (size == 1)
        {
            result.push_back(0) ;
            continue; ;
        }
        
        for (size_t i = 0; i < size; i++)
        {
            cin >> temp;
            for (size_t j = 0; j < size; j++)
            {
                small_temp = temp / (int) pow(10 , j) % 10;
                rows.push_back(small_temp);
            }
        colom.push_back(rows);
        sec_tmp.push_back(rows);
        rows.clear();
            
        }
    mirror(sec_tmp,size);
    dif(counter , size , sec_tmp , colom);
    mirror(colom,size);
    dif(counter,size,sec_tmp,colom);
    mirror(colom,size);
    dif(counter,size,sec_tmp,colom);
    cout << (counter/2 + 1) << endl ;
    counter = 0;
    colom.clear();
    sec_tmp.clear();
    
    }
    
    // for (size_t i = 0; i < num; i++)
    // {
    //     cout << result[i] << endl;
    // }
}
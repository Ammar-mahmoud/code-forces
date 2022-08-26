#include <bits/stdc++.h>
using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
    more
    int n , temp_row , temp_col ; cin >> n;
    while (n--)
    {
        int counter = 0 , mini = 3 ;
        cin >> temp_row >> temp_col;
        char arr[temp_row+1][temp_col+1] ;
        for (int i = 0; i < temp_row; i++)
        {
            for (int j= 0; j < temp_col; j++) 
            {
                cin >> arr[i][j];
                if(arr[i][j] == '1')counter++;
            }
        }
        for (int i = 0; i < temp_row ; i++)
        {
            for (int j = 0; j < temp_col; j++) 
            {
                
                if((i+1<temp_row)&&(j+1<temp_col)) mini = min(mini,(arr[i][j]=='1')+(arr[i+1][j]=='1')+(arr[i][j+1]=='1'));
                if((i-1>=0)&&(j+1<temp_col)) mini = min(mini,(arr[i][j]=='1')+(arr[i-1][j]=='1')+(arr[i][j+1]=='1'));
                if((i+1<temp_row)&&(j-1>=0)) mini = min(mini,(arr[i][j]=='1')+(arr[i+1][j]=='1')+(arr[i][j-1]=='1'));
                if((i-1>=0)&&(j-1>=0)) mini = min(mini,(arr[i][j]=='1')+(arr[i-1][j]=='1')+(arr[i][j-1]=='1'));
            }
        }
        mini > 1 ? cout << counter - mini + 1<< endl : cout << counter << endl ;
    }
}
#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int n ;
    string temp;
    cin >> n;
    while (n--)
    {
        long long size  , counter = 0 ; cin >> size;
        char arr[size][size];
        for (size_t i = 0; i < size; i++)
        {
            cin >> temp;
            for (size_t j = 0; j < size; j++) 
            {
                arr[i][j] = temp[j];
            }
        }
        size--;
        for (size_t i = 0; i < ceil(size/2.0); i++)
        {
            for (size_t j = 0; j < ceil(size/2.0); j++)
            {
                int turn = 0;
                if(arr[i][j] == '0' && arr[j][size-i] == '0' && arr[size - i][size - j] == '0' && arr[size-j][i] == '0') continue;
                else
                {
                    if(arr[i][j] == '0') turn++;
                    if(arr[j][size-i] == '0') turn++;
                    if(arr[size - i][size - j] == '0') turn++;
                    if(arr[size-j][i] == '0') turn++;
                }
                counter = counter + min(turn , 4 - turn);
                }}
            
        if (size % 2 == 0)
        {
            int mid = (size / 2 );
            for (size_t i = 0; i < ceil(size/2.0); i++)
            {
                int turn = 0;
                if(arr[i][mid] == '0' && arr[mid][size-i] == '0' && arr[size - i][mid] == '0' && arr[mid][i] == '0') continue;
                else
                {
                    if(arr[i][mid] == '0') turn++;
                    if(arr[mid][size-i] == '0') turn++;
                    if(arr[size - i][mid] == '0') turn++;
                    if(arr[mid][i] == '0') turn++;
                }
                counter = counter + min(turn , 4 - turn);
                }}
        cout << counter << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
    more
    int n , t; cin >> n;
    vector <int> arr(n);
    for (size_t i = 0; i < n; i++)cin >> arr[i];
    sort(arr.begin(), arr.end());
    cin >> t;
    while (t--)
    {
        int temp , low = 0 , up = n - 1  ; cin >> temp ; 
        while(true)
        {
            int mid = (up + low) / 2;
            if (temp < arr[0])
            {
                cout << 0 << endl;
                break;
            }
            else if (temp >= arr[n-1]){
               cout << n  << endl; 
               break;
            } 
            else if (temp == arr[0])
            {
                cout << 1 << endl;
                break;
            }
            else if (arr[mid] < temp)low = mid + 1;
            else if (arr[mid] == temp)
            {
                cout << mid + 1 << endl;
                break;
            }
            else if (arr[mid -1] < temp && arr[mid + 1] > temp) 
            {
                cout << mid << endl;
                break;
            }
            else up = mid - 1;
        }}}
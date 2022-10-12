#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cin>>m;
	int b[m];
	for(int j=0;j<m;j++)cin>>b[j];
	sort(a,a+n);
	sort(b,b+m);
	int i=0 , j=0 , count=0;
    while(i < n && j < m)
    {
        if (abs(a[i] - b[j]) <= 1)
        {
         count++;i++;j++;
        }
        else
        {
            a[i] > b[j] ? j++ : i++;
        }
    }
    cout << count;
}
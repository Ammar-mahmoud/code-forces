#include <iostream>
#include <cmath>
using namespace std ;
int main()
{
	double m, n, a,j,k ;
    long long int s;
	cin >> m >> n >> a;
	s = ceil(m / a) * ceil(n / a);
	cout << s;   
}
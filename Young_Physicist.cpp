#include <iostream>
using namespace std;

int main(){
int size , sum1 = 0 , sum2 = 0 , sum3 = 0 , input ;
cin >> size ; 
for (size_t i = 0; i < size * 3; i++)
{
    cin >> input ;

    if (i % 3 == 0)
        sum1 = sum1 + input ;

    else if (i % 3 == 1)
        sum2 = sum2 + input ;

    else
        sum3 = sum3 + input ;  
}

if(sum1 == 0 && sum2 == 0 && sum3 == 0 )
    cout << "YES";

else
    cout << "NO";   
}
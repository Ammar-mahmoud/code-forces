#include <iostream>
#include <string>

using namespace std;

int main(){
    int sum1 = 0 , sum2 = 0 ;
    string str1 , str2;
    
    cin >> str1 ;
    cin >> str2 ;

    for (size_t i = 0; i < str1.length(); i++)
    {
        if(str1[i] > 90)
            sum1 = str1[i] - 32;

        else
            sum1 = str1[i];

        if(str2[i] > 90)
            sum2 = str2[i] - 32;

        else
            sum2 = str2[i];

        if (sum1 > sum2){
            cout << 1;
            return 0 ;
        }
        if (sum1 < sum2){
            cout << -1;
            return 0 ;
        }
    }
    cout << 0 ;   
}
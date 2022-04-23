#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
 
int main (){
    int n ;
    cin >> n ;
    cin.ignore();
    int sum = 0 ;
    for (size_t i = 0; i < n; i++)
    {
        string word ; 
        getline (cin , word);
        word.erase(remove(word.begin(), word.end(), ' '), word.end());
        if ((word[0]== '1' && word[1]== '1') || (word[0]== '1' && word[2]=='1') || (word[2]== '1' && word[1]== '1') )
 
            sum = sum + 1;
    }
    cout << sum << endl ;
    return 0;
}
    

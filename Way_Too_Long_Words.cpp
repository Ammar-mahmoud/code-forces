#include <iostream>
#include <string>
 
using namespace std ;
 
int main (){
    int n ;
    cin >> n ;
    for (int i = 0 ; i < n ; i ++){
        string w;
        cin >> w ;
        int s = w.length();
        if (s > 10){
            cout << w[0] << s - 2 << w [s-1] << endl;
        }
        else{
            cout << w << endl;
        }
    }
}

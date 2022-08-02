#include <bits/stdc++.h>

using namespace std;
#define more ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

int main()
{
    more
    int n_input , sum ;
    string str;

    map < char , int > conversion{
    {'a' , 1} , {'b' , 2} , {'c' , 3} , {'d' ,4 } ,{'e' ,5 } , {'f' ,6 } , {'g' , 7} , {'h' ,8 } ,
    {'i' , 9} , {'j' , 10} , {'k' , 11} , {'l' ,12 } ,{'m' ,13 } , {'n' , 14} , {'o' , 15} , {'p' ,16 } ,
    {'q' ,17 } , {'r' , 18} , {'s' ,19 } , {'t' , 20} ,{'u' ,21 } , {'v' ,22 } , {'w' , 23} , {'x' , 24} ,
    {'y' , 25} , {'z' , 26} 
    };

    cin >> n_input;
    while (n_input--)
    {
        cin >> str;
        sum = (conversion[str[0]] - 1) * 25 + conversion[str[1]] - 1;
        if (conversion[str[0]] > conversion[str[1]])
        {
            sum++;
        }
        cout << sum << endl;
    }}
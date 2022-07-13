#include<iostream>
#include<vector>
#include<string>
#include <set>
using namespace std;

int main ()
{
    int num;
    cin>> num;
    vector <int> vec;
    while (num > 0)
    {
        num--;
        set<char> st;
        int counter = 0;
        string str;

        cin>> str;
        for(int i=0;i<str.length();i++)
        {
           st.insert(str[i]);
           if(st.size()>3)
           {

               counter++;
               st.clear();
               i--;
           }
        }
        vec.push_back(counter+1);
    }
    
    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
    
    return 0;

}


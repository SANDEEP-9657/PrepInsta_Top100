// 10 .Remove all characters from string except alphabets

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string" << endl;
    getline(cin,s);
    
    string r;
    
    for(auto c : s){
        if(c >= 65 && c<=90 || c>=97 && c<=122){
            r.push_back(c);
        } 
    }
    cout << r << endl;

    return 0;
}
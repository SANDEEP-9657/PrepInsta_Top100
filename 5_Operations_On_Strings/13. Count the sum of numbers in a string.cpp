// 13. Count the sum of numbers in a string

#include<bits/stdc++.h>
using namespace std;

int sum_string(string s){
    int res = 0;
    for(auto ch : s){
        if(isdigit(ch)){
            res = res + ch - '0' ;
        }
    }
    return res;
}

int main(){
    string s;
    cout << "Enter the string" << endl;
    getline(cin , s);
    cout << "The sum of numbers in the given string is" << sum_string(s) << endl;
    
}
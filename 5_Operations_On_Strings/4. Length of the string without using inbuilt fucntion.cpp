// 4. Length of the string without using strlen() function 

#include<bits/stdc++.h>
using namespace std;

int len(string s){
    int res = 0;
    while(s[res]!='\0'){
        res++;
    }
    return res;
}

int main(){
    
    string s;
    cout << "Enter the string" << endl;
    getline(cin,s);
    cout << "The lenghth of the string is" << len(s) << endl;
    
    return 0;
}
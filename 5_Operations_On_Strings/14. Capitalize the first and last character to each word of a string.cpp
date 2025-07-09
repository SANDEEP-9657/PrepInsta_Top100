// 14. Capitalize the first and last character to each word of a string

#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cout << "Enter the string" << endl;
    getline(cin , s);
    if(s[0] >= 97 && s[0]<=122 ){
        s[0]=s[0]-32;
    }
    if(s[s.length()-1]>=97 && s[s.length()-1]<=122){
        s[s.length()-1]=s[s.length()-1]-32;
    }
    for(int i = 2; i <=s.length()-2 ; i++){
        if(s[i]==' '){
            if(s[i-1]>=97 && s[i-1]<=122){
                s[i-1]=s[i-1]-32;
            }
            if(s[i+1]>=97 && s[i+1]<=122){
                s[i+1]=s[i+1]-32;
            }
        }
    }
    
    cout << "After  Capitalizing " << s << endl;
    
    
}
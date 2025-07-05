// 5. Toggle each character in a string : 

#include<bits/stdc++.h>
using namespace std;



int main(){
    
    string s;
    cout << "Enter the string" << endl;
    getline(cin,s);
    for(int i = 0 ; i<s.length();i++){
        if(s[i]>=97){
            s[i]=s[i]-32;
        }
        else{
            s[i]=s[i]+32;
        }
    }
    cout << "The string after Toggling is" << s << endl;
    
    return 0;
}
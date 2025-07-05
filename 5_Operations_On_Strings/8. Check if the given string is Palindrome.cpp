// 8. Check if the given string is Palindrome or not

#include<bits/stdc++.h>
using namespace std;

bool isPal(string s){
    int l = 0;
    int r = s.length()-1;
    while(l<r){
        if(s.at(l)!=s.at(r)){
            return false;
        }
        l++;
        r--;
    }
    return true;
}


int main(){
    
    string ch;
    cout << "Enter the string" << endl;
    getline(cin,ch);
    if(isPal(ch)){
        cout << "The entered string is Palindrome" << endl;
    }
    else{
        cout << "The entered string is not Palindrome" << endl;
    }
    
    return 0;
}
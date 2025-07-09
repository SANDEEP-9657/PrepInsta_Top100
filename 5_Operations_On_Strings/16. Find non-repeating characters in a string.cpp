//    16. Find non-repeating characters in a string

#include<bits/stdc++.h>
using namespace std;


int main(){
    string s ;
    cout << "Enter the string " << endl;
    getline(cin , s);
    unordered_map<char , int> mp;
    for(auto ch : s){
        mp[ch]++;
    }
    
    for(auto i : mp){
        if(i.second == 1){
            cout << i.first << "  ";
        }
    }
    
    
    
    
    
    
}
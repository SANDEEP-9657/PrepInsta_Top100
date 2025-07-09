//   17. Check if two strings are Anagram or not.

#include<bits/stdc++.h>
using namespace std;


int main(){
    string s , t;
    cout << "Enter the string 1" << endl;
    getline(cin , s);
    cout << "Enter the string 2" << endl;
    getline(cin , t);
    
    
    unordered_map<char,int> mp1;
    unordered_map<char,int> mp2;
    
    for(auto ch : s){
        mp1[ch]++;
    }
    for(auto ch : t){
        mp2[ch]++;
    }
    
    for(auto i : mp1){
        if(i.second != mp2[i.first]){
            cout << "They are not Anagram" << endl;
            return 0;
        }
    }
    cout << "They are  anagram" << endl;
    
    
    
    
    
}
// 9. Print the given string in reverse order 

#include<bits/stdc++.h>
using namespace std;




int main(){
    
    string ch;
    cout << "Enter the string" << endl;
    getline(cin,ch);
    for(int i = ch.length()-1;i>=0;i--){
        cout << ch[i] ;
    }
    
    return 0;
}
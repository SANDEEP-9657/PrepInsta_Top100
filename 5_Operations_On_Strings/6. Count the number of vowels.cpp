// 6. Count the number of vowels

#include<bits/stdc++.h>
using namespace std;



int main(){
    
    string ch;
    cout << "Enter the string" << endl;
    getline(cin,ch);
    int res= 0;
    for(int i = 0 ; i<ch.length();i++){
        if(ch[i]=='a'||ch[i]=='A'||ch[i]=='e'||ch[i]=='E'||ch[i]=='i'||ch[i]=='I'||ch[i]=='o'||ch[i]=='O'||ch[i]=='u'||ch[i]=='U'){
            res++;
        }
    }
    
    cout << "The number of vowels in the given string is" << res << endl;
    
    return 0;
}
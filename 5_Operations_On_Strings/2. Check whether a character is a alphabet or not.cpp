// 2. Check whether a character is a alphabet or not

#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cout << "Enter the character" << endl;
    cin >> ch;
    if(ch>=65 && ch<=90 || ch>=97 && ch<=122){
        cout << "The entered character is an alphabet" << endl;
    }
    else{
        cout << "The entered character is not an alphabet" << endl;
    }
    
    return 0;
}
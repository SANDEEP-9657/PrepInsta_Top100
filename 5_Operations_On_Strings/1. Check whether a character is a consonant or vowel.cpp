// 1. Check whether a character is a vowel or consonant

#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cout << "Enter the alphabet" << endl;
    cin >> ch;
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
        cout << "The entered character is vowel" << endl;
    }
    else{
        cout << "The entered character is an consonant" << endl;
    }
    return 0;
}
// 24. Finding Number of times x digit occurs in a given input 

#include<bits/stdc++.h>
using namespace std;


int func(long int n , int f){
    int res = 0;
    while(n>0){
        if(n%10 == f){
            res++;
        }
        n = n / 10;
    }
    
    return res;
    
}

int main(){
    long int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int f;
    cout << "Enter the finding number" << endl;
    cin >> f;
    cout << "The number " << f << " occurs " << func(n,f) << "times in " << n ; 
    
    return 0;
    
}
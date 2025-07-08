// 20. Find the prime numbers between 1 to 100

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i = 2 ; i*i <= n ; i++){
        if(n%i == 0){
            return false;
        }
    }
    
    return true;
}

int main(){
    cout << "The prime numbers between 1 and 100 are" << endl;
    for(int i = 1 ; i<=100;i++){
        if(isPrime(i)){
            cout << i << "is Prime" << endl;
        }
    }
    
}
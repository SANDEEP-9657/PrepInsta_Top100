// 28. Finding prime factors of a number

#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n){
    for(int i = 2 ; i*i <= n ; i++){
        if(n % i ==0){
            return false;
        }
    }
    return true;
}

void primefactors(int n){
    for(int i = 1 ; i<=n/2 ; i++){
        if(n % i == 0){
            if(isPrime(i)){
                cout << i << endl;
            }
        }
    }
}


int main(){
   int n;
   cout << "Enter the number" << endl;
   cin >> n;
   primefactors(n);
   return 0;
}
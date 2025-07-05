// 17. Finding the Nth Term of the Fibonacci Series

#include<iostream>
#include<cmath>

using namespace std;

int fib(int n){
    int n1 = 0;
    int n2 = 1;
    
    for(int i = 2 ; i <=n-1 ; i++){
        int n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    
    return n2;
}






int main(){
   int n;
   cout << "Enter the nth value" << endl;
   cin >> n ;
   cout << fib(n);
   return 0;
}
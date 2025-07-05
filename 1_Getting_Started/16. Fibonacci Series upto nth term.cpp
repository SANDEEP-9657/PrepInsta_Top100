// 16. Fibonacci Series upto nth term

#include<iostream>
#include<cmath>

using namespace std;

void fib(int n){
    int n1 = 0;
    int n2 = 1;
    cout << n1 << endl;
    cout << n2 << endl;
    for(int i = 2 ; i <=n-1 ; i++){
        int n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3 << endl;
    }
}






int main(){
   int n;
   cout << "Enter the nth value" << endl;
   cin >> n ;
   fib(n);
   return 0;
}
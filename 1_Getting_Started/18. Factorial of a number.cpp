// 18. Factorial of a number

#include<iostream>
#include<cmath>

using namespace std;

int fact(int n){
    int res = 1;
    while(n){
        res = res*n;
        n--;
    }
    
    return res;
}






int main(){
   int n;
   cout << "Enter the nth value" << endl;
   cin >> n ;
   cout << fact(n);
   return 0;
}
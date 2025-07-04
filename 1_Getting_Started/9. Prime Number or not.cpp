// 9. Prime Number or not

#include<iostream>

using namespace std;

int main(){
   int n;
   cout << "Enter the number" << endl;
   cin >> n;
   int flag = 1;
   for(int i = 2 ; i*i <= n ; i++){
       if(n % i == 0){
           flag = 0;
           break;
       }
   }
   
   flag == 1 ? cout << n << "is prime" : cout << n << "is not prime";

   return 0;
}
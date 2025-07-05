// 20. Factor of a number

#include<iostream>
#include<cmath>

using namespace std;


int main(){
   int n;
   cout << "Enter the number" << endl;
   cin >> n;
   cout << "The Factors of the number are" << endl;
   for(int i = 1 ; i <= n ; i++){
       if(n % i == 0){
           cout << i << endl;
       }
   }
   return 0;
}
// 24. Harshad number

#include<iostream>
#include<cmath>

using namespace std;

bool isHarshad(int n){
  int temp = n;
  int sum = 0;
  while(n>0){
      sum = sum + n % 10;
      n = n / 10;
  }
  return temp % sum == 0;
   
}


int main(){
   int n;
   cout << "Enter the number" << endl;
   cin >> n;
   if(isHarshad(n)){
       cout << "It is a Harshad number" << endl;
   }
   else{
       cout << "It is not a Harshad number" << endl;
   }
   return 0;
}
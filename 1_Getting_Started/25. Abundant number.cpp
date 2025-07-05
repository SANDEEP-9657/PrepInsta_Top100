// 25. Abundant number

#include<iostream>
#include<cmath>

using namespace std;

int factorsum(int n){
    int sum = 0;
    for(int i = 1 ; i<=n/2;i++){
        if(n % i == 0){
            sum = sum + i;
        }
    }
    return sum;
}

bool isAbundant(int n){
  
  if(factorsum(n)>n){
      return true;
  }
  else{
      return false;
  }
   
}


int main(){
   int n;
   cout << "Enter the number" << endl;
   cin >> n;
   if(isAbundant(n)){
       cout << "It is Abundant number" << endl;
   }
   else{
       cout << "It is not Abundant number" << endl;
   }
   return 0;
}
// 26. Friendly pair

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

bool isfriendly(int n , int o){
  
  return factorsum(n)/n == factorsum(o)/o ;
   
}


int main(){
   int n,o;
   cout << "Enter the numbers" << endl;
   cin >> n>>o;
   if(isfriendly(n,o)){
       cout << "they are friendly pair" << endl;
   }
   else{
       cout <<"they are not friendly pair" << endl;
   }
   
   return 0;
}
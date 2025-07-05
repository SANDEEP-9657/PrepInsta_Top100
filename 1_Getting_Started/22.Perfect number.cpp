// 22.Perfect number

#include<iostream>
#include<cmath>

using namespace std;

bool isPerfect(int n){
    int res = 0;
    for(int i = 1 ; i<=n/2 ; i++){
        if(n % i == 0){
            res+=i;
        }
    }
    return res == n;
}


int main(){
   int n;
   cout << "Enter the number" << endl;
   cin >> n;
   if(isPerfect(n)){
       cout << "It is a Perfect number" << endl;
   }
   else{
       cout << "It is not a Perfect Number" << endl;
   }
   return 0;
}
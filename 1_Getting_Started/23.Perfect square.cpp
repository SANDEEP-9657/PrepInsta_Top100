// 23.Perfect square

#include<iostream>
#include<cmath>

using namespace std;

bool isPerfect(int n){
    
    for(int i = 1 ; i<=n/2 ; i++){
        if(i*i == n){
            return true;
        }
    }
    return false;
}


int main(){
   int n;
   cout << "Enter the number" << endl;
   cin >> n;
   if(isPerfect(n)){
       cout << "It is a Perfect square" << endl;
   }
   else{
       cout << "It is not a Perfect square" << endl;
   }
   return 0;
}
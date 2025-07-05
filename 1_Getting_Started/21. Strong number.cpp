// 21. Strong number

#include<iostream>
#include<cmath>

using namespace std;

int fact(int n){
    int res = 1;
    while(n){
        res = res * n;
        n--;
    }
    return res;
}

int compute(int n){
    int res = 0;
    while(n>0){
        res =  res + fact(n%10);
        n = n / 10;
    }
    
    return res;
}
bool isStrong(int n){
   return compute(n)==n; 
}



int main(){
   int n;
   cout << "Enter the number" << endl;
   cin >> n;
   if(isStrong(n)){
       cout << "It is Strong number" << endl;
   }
   else{
       cout << "It is not a Strong number" << endl;
   }
   return 0;
}
// 27. Automorphic Number

#include<iostream>
#include<cmath>

using namespace std;

int len(int n){
    int l = 0;
    while(n>0){
        l++;
        n/=10;
    }
    return l;
}

bool check(int n){
    if(n*n % static_cast<int>(pow(10,len(n))) == n){
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
   if(check(n)){
       cout << "it is an Automorphic number" << endl;
   }
   else{
       cout << "it is not an Automorphic number" << endl;
   }
   return 0;
}
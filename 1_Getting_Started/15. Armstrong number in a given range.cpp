// 15. Armstrong number in a given range

#include<iostream>
#include<cmath>

using namespace std;

int len(int n){
    int l = 0;
    while(n>0){
        l++;
        n = n / 10;
    }
    return l;
}

bool isArm(int n){
    int temp = n;
    int l =  len(n);
    int sum = 0;
    while(n > 0){
        sum = sum + static_cast<int>(pow((n%10),l));
        n = n / 10;
    }
    
    if(sum == temp){
        return true;
    }
    else{
        return false;
    }
}




int main(){
   int n,p;
   cout << "Enter the range" << endl;
   cin >> n >> p;
   for(int i = n; i<=p;i++){
       if(isArm(i)){
       cout << i <<  endl;
   }
   
   }
   
   
   return 0;
}
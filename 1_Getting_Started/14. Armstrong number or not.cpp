// 14. Armstrong number or not

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
   int n;
   cout << "Enter the number" << endl;
   cin >> n;
   if(isArm(n)){
       cout << "It is an Armstrong number" << endl;
   }
   else{
       cout << "It is not an Armstrong number" << endl;
   }
   
   return 0;
}
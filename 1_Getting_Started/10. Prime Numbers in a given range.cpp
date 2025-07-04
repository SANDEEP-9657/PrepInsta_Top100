// 10. Prime Numbers in a given range

#include<iostream>

using namespace std;

bool isPrime(int n){
    int flag = 1;
    for(int i = 2; i*i <= n ; i++){
        if(n%i ==0 ){
            flag = 0;
            break;
        }
    }
    
    if(flag == 1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int m , n;
    cout << "Enter the range" << endl;
    cin >> m >> n;
    for(int i = m ; i<=n;i++){
        if(isPrime(i)){
            cout << i << endl;
        }
    }
   return 0;
}
// 4. Binary to Decimal to conversion 

#include<bits/stdc++.h>
using namespace std;


int bin_dec(int n){
    int dec = 0;
    int len = 0;
    while(n>0){
        if(n % 10 == 1){
            dec = dec + pow(2,len);
        }
        len++;
        n=n/10;
    }
    return dec;
}

int main(){
    int x;
    cout << "Enter the binary number" << endl;
    cin >> x ;
    cout << "The equivalent Decimal number is" << bin_dec(x) << endl;
    return 0;
    
}
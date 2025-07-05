// 5. Octal to Decimal conversion 

#include<bits/stdc++.h>
using namespace std;


int oct_dec(int n){
    int dec = 0;
    int len = 0;
    while(n>0){
        int digit = n % 10;
        dec = dec + digit * pow(8,len);
        len++;
        n=n/10;
    }
    return dec;
}

int main(){
    int x;
    cout << "Enter the oct number" << endl;
    cin >> x ;
    cout << "The equivalent Decimal number is" << oct_dec(x) << endl;
    return 0;
    
}
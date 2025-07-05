// 3. Greatest Common Divisor(GCD) 

#include<bits/stdc++.h>
using namespace std;



int main(){
    int x,y;
    cout << "Enter the two numbers" << endl;
    cin >> x >> y;
    while(y != x){
        if(y>x){
            y = y-x;
        }
        else{
            x = x-y;
        }
    }
    
    cout << "the gcd of two numbers is" << x << endl;
    return 0;
    
}
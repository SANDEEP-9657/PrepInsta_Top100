// 2. Lowest Common Multiple (LCM)

#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}

int main(){
    int x,y;
    cout << "Enter the two numbers" << endl;
    cin >> x >> y;
    cout << "The lcm of the two numbers are" << endl;
    cout << x*y / gcd(x,y) << endl;
    return 0;
    
}
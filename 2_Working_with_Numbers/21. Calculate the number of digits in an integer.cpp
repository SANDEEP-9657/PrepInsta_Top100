// 21. Calculate the number of digits in an integer 

#include<bits/stdc++.h>
using namespace std;



int main(){
    long int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "The number of digits in the given number is" << floor(log10(n))+1 << endl;
    
    return 0;
    
}
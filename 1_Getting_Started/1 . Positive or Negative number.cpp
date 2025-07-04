// 2. Even or Odd number

#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    n % 2 == 0 ? cout << "Even Number" : cout << "Odd Number" ;
    
    return 0;
    
}
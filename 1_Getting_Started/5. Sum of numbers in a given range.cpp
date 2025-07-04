// 5. Sum of numbers in a given range

#include<iostream>

using namespace std;

int main(){
    int m , n ;
    cout << "Enter the value of M and N" << endl;
    cin >> m >> n;
    cout <<  n*(n+1)/2 - m*(m+1)/2 + m;

    return 0;
}
// 6. Greatest of two numbers

#include<iostream>

using namespace std;

int main(){
    int m , n ;
    cout << "Enter the value of M and N" << endl;
    cin >> m >> n;
    if(m==n){
        cout << "They are equal" << endl;
    }
    else{
        m > n ? cout << "M is greater" : cout << "N is greater" ;
    }

    return 0;
}
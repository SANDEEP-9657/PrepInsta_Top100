// 7. Greatest of three numbers

#include<iostream>

using namespace std;

int main(){
    int m , n,o;
    cout << "Enter the value of M , N and O" << endl;
    cin >> m >> n >> o;
    if(m >n && m > o){
        cout << m << "is greater" << endl;
    }
    else{
        if(n > m && n > o){
            cout << n << "is greater" << endl;
        }
        else{
            cout << o << "is greater" << endl;
         }
    }
    

    return 0;
}
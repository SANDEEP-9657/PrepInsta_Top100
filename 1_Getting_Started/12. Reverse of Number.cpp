// 12. Reverse of Number

#include<iostream>

using namespace std;

int rev(int n){
    int Reverse = 0;
    while(n > 0){
        Reverse = Reverse*10 + n % 10;
        n = n / 10;
    }
    return Reverse;
}



int main(){
   int n;
   cout << "Enter the number" << endl;
   cin >> n;
   cout << rev(n) << endl;
   return 0;
}
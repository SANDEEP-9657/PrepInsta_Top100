// 11. Sum of digits of a number

#include<iostream>

using namespace std;

int sum_of_number(int n){
    int sum = 0;
    while(n>0){
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}



int main(){
   int n;
   cout << "Enter the number" << endl;
   cin >> n;
   cout << sum_of_number(n) << endl;
   return 0;
}
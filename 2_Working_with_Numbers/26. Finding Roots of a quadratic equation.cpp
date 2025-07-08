// 26. Finding Roots of a quadratic equation 

#include<bits/stdc++.h>
using namespace std;


void func(int a , int b , int c){
    if(a == 0){
        cout << "Invalid" << endl;
        return;
    }
    int d = b * b - 4 * a * c;
    int sqr = sqrt(abs(d));
    if(d>0){
        cout << "Roots are real and distinct" << endl;
        cout << (double)(-b+sqr)/(2*a) << endl;
        cout << (double)(-b-sqr)/(2*a) << endl;
    }
    else if(d==0){
        cout << "Roots are equal" << endl;
        cout << -(double)b/(2*a) << endl;
    }
    else{
        cout << "Roots are complex \n";
        cout << -(double)b / (2 * a) << " + i" << sqr<< "\n" << -(double)b / (2 * a) << " - i" << sqr;
    }
}

int main(){
   int a , b , c;
   cout << "Enter the values of a , b and c" << endl;
   cin >> a >> b >> c;
   func(a,b,c);
   
   
    
    return 0;
    
}
// 12. Quadrants in which a given coordinate lies

#include<bits/stdc++.h>
using namespace std;



int main(){
   int x , y;
   cout << "Enter the two coordinates" << endl;
   cin >> x >> y;
   if(x>0 && y > 0){
       cout << "The point lies in Quadrant 1" << endl;
   }
   else if(y>0 && x < 0){
       cout << "The point lies in Quadrant 2" << endl;
   }
   else if(x<0 && y < 0)
   {
       cout << "The point lies in Quadrant 3" << endl;
   }
   else if(x > 0 && y < 0){
       cout << "The point lies in Quadrant 4" << endl;
   }
   else if( x == 0 && y ==0){
       cout << "The point lies in the origin" << endl;
   }
   else if(x == 0){
       cout << "The point lies in y axis" << endl;
   }
   else{
       cout << "The point lies in x axis" << endl;
   }
    
    return 0;
    
}
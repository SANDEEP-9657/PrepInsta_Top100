// 8.Sort the elements of an array

#include<bits/stdc++.h>
using namespace std;



int main(){
    
    int n;
    cout << "Enter the size of Array" << endl;
    cin >> n;
    cout << "Enter the array elements" << endl;
    vector<int> arr;
    for(int i =  1 ; i<=n;i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    
    sort(arr.begin(),arr.end());
    
    
    for(auto i : arr){
        cout << i << " " ;
    }
    
   return 0;
}

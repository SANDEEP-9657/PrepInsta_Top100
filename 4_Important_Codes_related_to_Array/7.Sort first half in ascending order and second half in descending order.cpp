// 7.Sort first half in ascending order and second half in descending

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
    int h = n /2;
    sort(arr.begin(),arr.begin()+h);
    sort(arr.begin()+h+1 , arr.end(),greater<int>());
    
    for(auto i : arr){
        cout << i << " " ;
    }
    
   return 0;
}

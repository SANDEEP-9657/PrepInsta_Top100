// 9.Finding the frequency of elements in an array

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
    
    unordered_map<int,int> mp;
    for(auto i : arr){
        mp[i]++;
    }
    
    for(auto i : mp){
        cout << i.first << "->" << i.second << endl ;
    }
    
   return 0;
}

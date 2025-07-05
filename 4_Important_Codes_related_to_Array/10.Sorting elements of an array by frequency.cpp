// 10.Sorting elements of an array by frequency 

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
    int i;
    for(i =0 ; i<arr.size()-1;i++){
        for(int j = i +1 ; j< arr.size();j++){
            if(mp[arr.at(i)]>mp[arr.at(j)]){
                int temp = arr.at(i);
                arr.at(i)=arr.at(j);
                arr.at(j)=temp;
                }
        }
    }
    
    for(auto i : arr){
        cout << i << endl;
    }
    
   return 0;
}

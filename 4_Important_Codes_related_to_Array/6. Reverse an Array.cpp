// 6. Reverse an Array

#include<bits/stdc++.h>
using namespace std;

void Reverse(vector<int>& arr){
    int l = 0;
    int r = arr.size()-1;
    while(l < r){
        int temp = arr.at(l);
        arr.at(l)=arr.at(r);
        arr.at(r)=temp;
        l++;
        r--;
    }
}

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
    Reverse(arr);
    for(auto i : arr){
        cout << i << endl;
    }
    
   return 0;
}

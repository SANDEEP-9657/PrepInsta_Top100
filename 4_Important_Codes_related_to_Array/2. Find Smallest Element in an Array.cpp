// 2. Find Smallest Element in an Array

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
    int small = arr.at(0);
    for(int i = 0 ; i< arr.size();i++){
        if(arr.at(i)<small){
            small = arr.at(i);
        }
    }
    cout << "the smallest element in the array" << small << endl;
    
}

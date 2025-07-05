// 4. Find Second Smallest Element in an Array 

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
    
    cout << "the second Smallest element in the array" << arr.at(1) << endl;
    
}

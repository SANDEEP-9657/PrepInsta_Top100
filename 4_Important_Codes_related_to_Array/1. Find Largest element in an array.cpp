// 1. Find Largest element in an array

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout << "Enter the size of Array" << endl;
    cin >> n;
    cout << "Enter the array elements" << endl;
    vector<int> arr;
    int lar = 0;
    for(int i =  1 ; i<=n;i++){
        int num;
        cin >> num;
        if(num > lar){
            lar = num;
        }
        arr.push_back(num);
    }
    cout << "The largest number in the array is" << lar << endl;
}

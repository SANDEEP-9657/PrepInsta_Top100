// 5. Calculate the sum of elements in an array 

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
    
    int sum  = 0;
    for(int i = 0 ; i<arr.size();i++)
    {
        sum += arr.at(i);
    }
    cout << "the sum of elements of array is" << sum << endl;
}

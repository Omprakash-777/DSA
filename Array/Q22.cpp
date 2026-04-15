// Count frequency of each element
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void freCount(vector<int>&arr, int n){
    int j=0;
    unordered_map<int, int>ans;
    for(auto i:arr){
        ans[i]++;
    }
    cout<<"value :- frequency"<<endl;
    for(auto i:ans){
        cout<<i.first<<" :- "<<i.second<<endl;
    }

}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the value of arr: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    freCount(arr, n);
    return 0;
}
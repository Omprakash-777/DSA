// sort an aarray in descending order

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the value of arr: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]>=arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}
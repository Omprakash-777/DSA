// seprate even or odd element in two array

#include<bits/stdc++.h>
using namespace std;

void seprate_arr(vector<int>& arr, int n){
    vector<int>even;
    vector<int>odd;
    for(int i:arr){
        if(i%2==0){
            even.push_back(i);
        }else{
            odd.push_back(i);
        }
    }
    cout<<"Even element of array: ";
    for(int i:even){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"odd element of array: ";
    for(int i:odd){
        cout<<i<<" ";
    }

}

int main(){
    int n,val;
    cout<<"Enter the Size of Arr: ";
    cin>>n;
    vector<int>arr;
    cout<<"Enter the value of element: ";
    for(int i=0; i<n; i++){
        cin>>val;
        arr.push_back(val);
    }
    seprate_arr(arr, n);
    
    return 0;
}
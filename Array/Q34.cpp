//Count the number of elements greater than a given number.


#include<iostream>
#include<vector>
using namespace std;

void countGreater(vector<int>& arr, int n, int k){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]>k){
            count++;
        }
    }
    cout<<count;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    countGreater(arr, n, k);

    return 0;
}
//Find the sub array with maximum sum (Kadane's algorithm).

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void maxSum(vector<int>& arr, int n){
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    maxSum(arr, n);

    return 0;
}
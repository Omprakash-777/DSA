//Find the sum of even and sum of odd elements separately.

#include<iostream>
#include<vector>
using namespace std;

void sumEvenOrOdd(vector<int>& arr, int n){
    int evenSum=0, oddSum=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            evenSum+=arr[i];
        }else{
            oddSum+=arr[i];
        }
    }
    cout<<"Sum of even element: "<<evenSum<<"\n"<<"Sum of odd element: "<<oddSum;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sumEvenOrOdd(arr, n);

    return 0;
}
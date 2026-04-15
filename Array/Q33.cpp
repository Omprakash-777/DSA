//Check if an array is sorted (ascending).

#include<iostream>
#include<vector>
using namespace std;

void sortArr(vector<int>& arr, int n){
    bool ans=false;
    for(int i=0; i<n-1; i++){
        if(arr[i]<=arr[i+1]){
            ans=true;
        }else{
            ans=false;
            break;
        }
    }
    cout<<ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sortArr(arr, n);

    return 0;
}

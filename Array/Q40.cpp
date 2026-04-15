//Find missing number in a sequence from 1 to n.


#include<iostream>
#include<vector>
using namespace std;

void missNo(vector<int>& arr, int n){
    int c=0;
    for(int i=0; i<n; i++){
        if(arr[c]==i+1){
            c++;
        }else{
            cout<<i+1<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    missNo(arr, n);

    return 0;
}
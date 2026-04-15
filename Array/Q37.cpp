//Find the majority element (element occurring more than n/2 times).

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void majorityEle(vector<int>& arr, int n){
    unordered_map<int, int>fre;
    for(int i=0; i<n; i++){
        fre[arr[i]]++;
    }
    for(auto i:fre){
        if(i.second>n/2){
            cout<<i.first;
        }
    }
}

void majorityEle1(vector<int>& arr, int n){
    int ele, count=0;
    for(int i=0; i<n; i++){
        if(count==0){
            count++;
            ele=arr[i];
        }else if(ele==arr[i]){
            count++;
        }else{
            count--;
        }
    }
    int new_count=0;
    for(int i=0; i<n; i++){
        if(ele==arr[i]){
            new_count++;
        }
    }

    if(new_count>n/2){
        cout<<ele;
    }else{
        cout<<"no majority element. ";
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // majorityEle(arr, n);
    majorityEle1(arr, n);      //-->Moore’s Voting Algorithm

    return 0;
}
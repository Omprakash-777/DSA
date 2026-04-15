//Find the duplicate number in an array (with one duplicate).

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void DupliNo(vector<int>& arr, int n){
    unordered_set<int> s;

    for(int x : arr){
        if(s.find(x) != s.end()){
            cout << x;
            return;
        }
        s.insert(x);
    }
}

void DupliNo1(vector<int>& arr, int n){
    int slow = arr[0];
    int fast = arr[0];

    while(true){
        slow = arr[slow];
        fast = arr[arr[fast]];

        if(slow == fast){
            break;
        }
    }

    fast = arr[0];

    while(slow != fast){
        slow = arr[slow];
        fast = arr[fast];
    }

    cout << slow;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    DupliNo(arr, n);
    // DupliNo1(arr, n);     

    return 0;
}
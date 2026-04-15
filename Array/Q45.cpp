// Find the length of the longest sub array with all distinct elements.

#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;

void longestDistinct(vector<int>& arr, int n){
    unordered_set<int> s;

    int left = 0, right = 0;
    int maxLen = 0;

    while(right < n){
        while(s.find(arr[right]) != s.end()){
            s.erase(arr[left]);
            left++;
        }

        s.insert(arr[right]);

        maxLen = max(maxLen, right - left + 1);

        right++;
    }

    cout << maxLen;
}

void longestDistinct1(vector<int>& arr, int n){
    unordered_map<int, int> mp;

    int left = 0;
    int maxLen = 0;

    for(int right = 0; right < n; right++){

        if(mp.find(arr[right]) != mp.end()){
            left = max(left, mp[arr[right]] + 1);
        }

        mp[arr[right]] = right;

        maxLen = max(maxLen, right - left + 1);
    }

    cout << maxLen;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // longestDistinct(arr, n);
    longestDistinct1(arr, n);

    return 0;
}
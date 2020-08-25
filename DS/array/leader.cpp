/*
Leader is an array Element who shows property such that, All elements at right of it are smaller or equal to it
e.g {17,16,2,3,5,3}... here, leaders are {17, 16, 5}
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> findLeaders(int arr[], int n){
    vector<int> ans;
    int max = arr[--n];
    ans.push_back(max);
    while(n--){
        if(arr[n] >= max){
            ans.push_back(arr[n]);
            max = arr[n];
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    vector<int> ans;
    ans = findLeaders(arr, n);
    for (int i = 0; i<ans.size();i++)
        cout << ans[i] << " ";
}
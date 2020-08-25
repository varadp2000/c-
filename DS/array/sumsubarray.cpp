#include<bits/stdc++.h>
using namespace std;

pair<int, int> getSubArray(int arr[], int n, int s){
    int cs = arr[0], start = 0;
    for (int i = 0; i < n;i++){
        while(cs>s && start<i-1){
            cs = cs - arr[start];
            start++;
        }
        if(cs == s)
            return pair<int, int>(start+1, i);
        if(i<n)
            cs = cs + arr[i];
    }
    return pair<int, int>(1e8, 1e8);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s;
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n;i++)
            cin >> arr[i];

        pair<int, int> p = getSubArray(arr, n, s);
        p.first != 1e8?cout << p.first << " " << p.second << "\n": cout << "-1\n";
    }
    return 0;
}
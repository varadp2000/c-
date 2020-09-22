//Kadane's ALgorithm for Max sum subsequence in an Array
#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n){
    int max_here = arr[0];
    int alwaysmax = max_here;
    for (int i = 1; i < n;i++){
        max_here += arr[i];
        max_here = max(max_here, arr[i]);
        alwaysmax = max(alwaysmax, max_here);
    }
    return alwaysmax;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n;i++)
            cin >> arr[i];
        int ans = kadane(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
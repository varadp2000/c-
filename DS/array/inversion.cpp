#include<bits/stdc++.h>
using namespace std;

int inversions(int arr[], int n){
    int count = 0;
    for (int i = 0; i < n;i++){
        for (int j = i; j < n;j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
                count++;
            }
        }
    }
    return count;
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
        int ans = inversions(arr, n);
        cout << ans << endl;
        for (int i = 0; i < n;i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int getPairs(int arr[], int arr1[], int m, int n){
    sort(arr, arr + m);
    sort(arr1, arr1 + n);
    int count = 0;
    for (int i = 0; i < m;i++){
        for (int j = 0; j < n;j++){
            if(pow(arr1[j], arr[i]) > pow(arr[i], arr1[j]))
                count++;
        }
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> m >> n;
        int arr[m], arr1[n];
        for (int i = 0; i < m;i++)
            cin >> arr[i];
        for (int i = 0; i < n;i++)
            cin >> arr1[i];
        int ans = getPairs(arr, arr1, m, n);
        cout << ans << endl;
    }
    return 0;
}
//1,2,3,4,6 =>5

#include<bits/stdc++.h>
using namespace std;

int getNMissing(int arr[],int n){
    int reqSum = (n*(n+1))/2;
    int gotSum = 0;
    for(int i=0;i<n-1;i++){ 
        gotSum+=arr[i];
    }
    return reqSum - gotSum;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n-1;i++)
            cin >>arr[i];
        int ans = getNMissing(arr, n);
        cout << ans << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void alternative(int arr[], int n){
    int j,k=1;
    int max = n % 2 == 1 ? n / 2 + 1 : n / 2;
    for (int i = 0, j = n - 1; i < max; i += 2, j -= 2)
    {
        swap(arr[i], arr[j]);
        swap(arr[j], arr[k]);
        k+=2;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        alternative(arr, n);
        for (int i = 0; i < n;i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}

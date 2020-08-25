#include<bits/stdc++.h>
using namespace std;

int findMissing(int arr[], int n){
    int minValue = *min_element(arr, arr + n);

    int xorNum = 0;
    for (int i = 0; i < n;i++)
        xorNum ^= (minValue++) ^ arr[i];
    return xorNum ^ minValue;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    int missing = findMissing(arr, n);
    cout << "Missing Element is " << missing;
    return 0;
}
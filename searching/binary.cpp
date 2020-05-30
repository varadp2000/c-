#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int k){
    int mid = (low+high)/2;

    if(arr[mid] == k)
        return mid;
    
    else if(arr[mid]>k)
        return binarySearch(arr, low, mid-1 , k);
    
    return binarySearch(arr, mid, high-1, k);
}

int main(){
    int arr[] = {6,2,4,8,9,12,65,324,764,3,45};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout <<size << "\n";

    sort(arr,*arr+(&size)-1);

    for(auto i=0; i<size; i++ )
        cout << arr[i] << "\t";

    int res = binarySearch(arr, 0, size-1, 6);

    if(res == -1)
        cout << "Key Does not Exist\n";
    else
        cout << "Key Found at:" << res << "\n";
    

}
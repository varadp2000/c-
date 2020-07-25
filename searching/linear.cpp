#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int size, int key){
    for(int i=0;i<size;i++)
        if(arr[i] == key)
            return i;
    return -1;
}

int main(){
    int arr[] = {123,42,43,34,7,97,54,23,21,31,78};
    int res = search(arr, sizeof(arr)/sizeof(arr[0]), 100);
    if(res == -1)
        cout << "Key Does not Exist\n";
    else
        cout << "Key Found at:" << res << "\n";
    
}
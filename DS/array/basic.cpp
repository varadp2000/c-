#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n) {
    for (int i = 0; i < n;i++)
        cout << arr[i] << "\t";
    cout << "\n";
}

void rotateLeft(int arr[], int n) {
    int temp = arr[0];
    for (int i = 0; i < n;i++)
    {
        arr[i] = arr[(i + 1) % n];
    }
    arr[n - 1] = temp;
}

void rotateRight(int arr[], int n) {
    int temp = arr[n - 1];
    for (int i = n-1; i >=0;i--)
    {
        
        arr[i] = arr[(i - 1 + n) % n];
    }
    arr[0] = temp;
}

void insertAtPos(int arr[], int element, int pos, int size){
    if(pos < size)
        arr[pos-1] = element;
    else
        cout << "INSERTION FAILED";
}

void deleteAtPos(int arr[],int pos, int n){
    for (int i = pos - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
        arr[n - 1] = 0;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    cout << "Initial Array \t";
    printArr(arr, n);
    rotateLeft(arr, n);
    cout << "Left Rotation of array\t";
    printArr(arr, n);
    rotateRight(arr, n);
    cout << "Right Rotation of array\t";
    printArr(arr, n);
    cout << "Enter Element and Position to insert element in array\n";
    int ele, pos;
    cin >> ele >> pos;
    insertAtPos(arr, ele, pos, n);
    printArr(arr, n);
    cout << "Enter Position to Delete Element\n";
    cin >> pos;
    deleteAtPos(arr, pos, n);
    printArr(arr, n);
}
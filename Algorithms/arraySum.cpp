#include<bits/stdc++.h>
using namespace std;
//Find sum of elements in array with time complexity O(1) and additional space O(n)
//Sum array which stores sum of all previous elements of array
// sum(a,b) = sum(0,b) - sum(0,a-1)

int arrSum(int arr[], int a, int b){
    return arr[b] - arr[a-1];
}

int main(){
    int size;
    cout << "Enter array Size" << endl;
    cin >> size;
    int arr[size],sumArray[size]={0};
    sumArray[0] = 0;
    for(int i=0;i<size;i++){
        cin >> arr[i];
        if(i==0) sumArray[i] = arr[i];
        else sumArray[i] = sumArray[i-1] + arr[i];
    }
    int a,b;
    for(int i=0; i<size; i++)
        cout << sumArray[i] << "\t";
    cout << "\nPart of Array for Sum:";
    cin >> a >> b;

    int result = arrSum(sumArray, a, b);

    cout << "\nSum is:" << result << "\n";

}
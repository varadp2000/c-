#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};
    vector<int>::iterator itr;
    int i=0;
    cout << "Ele\t" << "Vector Address\t" << "Itr Address\n";
    for(itr=arr.begin();itr<arr.end(); itr++){
        cout << *itr << "\t";     //element in vector accesed with Iterator 
        cout << &arr[i] << "\t";  //Address of element
        cout << &itr << endl;     //Addresss of Iterator
        i++;
    }
}
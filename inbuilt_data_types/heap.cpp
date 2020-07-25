#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {6,3,5,7,8,34,54,67,9,21};

    make_heap(vec.begin(), vec.end());

    cout << "The heap is\n";
    for(auto i=vec.begin(); i<vec.end();i++)
        cout << *i << "\t";
}
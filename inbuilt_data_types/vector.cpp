#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec;
    int i;
    cout << "-1 for exit";
    while(1){
        if(i==-1)
            break;
        cin >> i;
        vec.push_back(i);
    }

    for(auto i=vec.begin();i<vec.end();i++)
        cout << *i << "\t";
    return 0;
}
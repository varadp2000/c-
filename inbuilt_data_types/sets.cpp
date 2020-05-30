#include<bits/stdc++.h>
using namespace std;

//Multisets are similar to sets except they can have same value to multiple elements
//All elements in set have unique value

int main(){
    set<int> decSet;
    set<int, greater<int>> incSet;

    auto j=0;
    while(j!= -1){
        cin >> j;
        cout << j;
        auto itr1 = decSet.end();
        auto itr2 = decSet.end();
        decSet.insert(itr1, j);
        incSet.insert(itr2, j);
    }

    cout << "DecSet id:\n";
    for(auto j=decSet.begin();j==decSet.end();j++)
        cout << *j << "\t";

    cout <<"\nIncSet is:\n";
    for(auto j=incSet.begin();j==incSet.end(); j++)
        cout << *j << "\t";
    return 0;
}
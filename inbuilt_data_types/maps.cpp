#include<bits/stdc++.h>
using namespace std;

//Maps are associative containers that store elements in a mapped fashion.
//Each element has a key value and a mapped value. No two mapped values can have same key values.
//Multimap is similar to map with an addition that multiple elements can have same keys.

int main(){
    map<int, int> m;

    cout << "here";
    
    for(int i=0;i<=10;i++){
        m.insert(pair<int, int>(i,i*10));
    }

    for(auto itr=m.begin(); itr==m.end();itr++ ){
        cout << itr->first << "\t" << itr->second << "\n";
    }
}
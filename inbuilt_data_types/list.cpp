#include<bits/stdc++.h>
using namespace std;

void showlist(list <int> g) 
{ 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 


int main(){

    list<int> l1, l2;
    int i=0;
    while(i != -1){
        cin >> i;
        l1.push_back(i);
        l2.push_front(i);
    }

    cout << "list1 is(initialized using push_back):" ;
    showlist(l1);
    cout << "list2 is:(initialized using push_front)";
    showlist(l2);

    cout << "l1.front()" <<l1.front();
    cout << "l1.back()" << l1.back();

    cout << "l1.pop_front()" << l1.pop_front();
    cout << "l1.pop_back()" << l1.pop_back();



}
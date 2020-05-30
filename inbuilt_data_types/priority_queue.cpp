#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue <int> pq;

    for(int i=0;i<10;i++){
        int temp;
        cin >>temp;
        pq.push(temp);
    }
    for(int i=0;i<10;i++){
        cout << pq.top()<< "  ";
        pq.pop();
    }
}
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t,ht=0;
    vector<pair<int, int> > stream;
        int i, j;
        pair<int, int> temp;
    cin >> t;
    cout << "\n";
    while(t>0){
        cin >> i >> j ;
        temp.first = i;
        temp.second = j;
        
        if(j>ht)
            ht = j;
        stream.push_back(temp);
        t--;
    }   
    cout << "\n";
    int grp;
    cin >> grp;
    cout << "\n";
    int possibles[ht] = {0};
    int temp[ht] = {0};
    set <int, greater <int> > a[t];
    for (int i = 1; i <= ht;i++){
        for (int j = 1; j <= ht;j++){
            {
                if(stream[i].first<=j&&stream[i].second>=j){
                    possibles[i]++;
                    a[j].insert(i);
                }
            }
        }
    }
    for (int i = 1; i <= ht;i++){
        set_union(a[i], a[i]+ht, a[i+1], a[i+1] + ht , a[i].brgin());   
    }
        int c = 0;
    while(grp--){
        int n;
        cin >> n;
        while(n--){
            int a;
            cin >> a;
            if(possibles[a]>possibles[c])
                c = a;
            cout << possibles[c] << "\t" << c << "\n";
            c = 0;
        }
    }
    
}
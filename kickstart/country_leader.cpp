#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a[n];
        for(int i=0;i<n;i++)
            getline(cin, a[i]);
        sort(a, a+n);
        int maxlen = 0;
        string ans = "";
        for(int i=n-1;i>=0;i--){
            if(a[i].length() >= maxlen){
                maxlen = a[i].length();
                ans = a[i];
            }
            if(a[i].length()< maxlen)break;
        }
        cout << ans << endl;
    }
}
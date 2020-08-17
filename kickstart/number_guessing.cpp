/*
Number Guessing Game
Google Kickstart Practise Round 2019 
Modified Version of Binary Search
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int l, h, tries;
        cin >> l >> h >> tries;
        l++;
        while(true){
            int mid = (l + h) / 2;
            cout << mid << endl;
            string s;
            cin >> s;
            if(s == "CORRECT")
                break;
            if(s == "TOO_SMALL")
                h = mid + 1;
            else
                l = mid - 1;
        }
    }
    return 0;
}
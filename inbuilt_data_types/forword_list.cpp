#include<bits/stdc++.h>
using namespace std;

//Forword list keeps track of next element only making it similar to Linked List
//List keeps track of forword and backword element
//List costs more memory than forwordList but we can't backtrack in forword list

int main(){
    forward_list<int> flist;
    int i=0;

    while (i!= -1)
    {
        cin >> i;
        flist.insert_after(flist.end(), i);
    }

    cout << "the List Is"; 

    for(int &j : flist){
        cout << j << "\t";
    }
    
}
#include<bits/stdc++.h>
using namespace std;

union Data{
    int SeqNum;
    char Name[20];
    int Price;
    char Command[5];
};

struct Store{
    char *Type;
    Data data;
};

stack<Store> s;


void CreateObject(char *t,int a, int b, char c[], char d[] ){
    Store tmp;
    const char O[] = "O", C[] = "C", P[] = "P";
        strcpy(tmp.Type ,t);
        if(strcmp(t, O) == 0){
            tmp.data.SeqNum = a;
            tmp.data.Price= b;
        }
        if(strcmp(t, P) == 0){
            tmp.data.SeqNum = a;
            tmp.data.Price = b;
            strcpy(tmp.data.Name ,c);
        }
        if(strcmp(t, C) == 0){
            tmp.data.SeqNum = a;
            strcpy(tmp.data.Command ,d);
        }
}

void displayStruct(){
    while(!s.empty()){
        Store tmp = s.top();
        cout << tmp.Type <<": "<<tmp.data.SeqNum<<": "<<tmp.data.Name<<": "<<tmp.data.Command<<": "<<tmp.data.Price ;
        s.pop();
    }
}

int main(){
    int a, b;
    char *t;
    char c[20], d[5];
    int i = 0;
    while(i<3){
        cin >> t >> c >> a >> b >> d;
        CreateObject(t, a, b, c, d);
        i++;
    }

    displayStruct();

}



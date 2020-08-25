#include<bits/stdc++.h>
using namespace std;

class LinkedList
{
    class Node
    {
        int data = 0;
        Node *next = NULL;
    };
    public:
        Node *head;
        void insert(int data) {
            Node *temp = head;
            Node *newnode = new Node();
            newnode.data = data;
            while(temp.next != NULL)
            {

                temp = temp->next;
            }
            temp->next = newnode;
        }
}
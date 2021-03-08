#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

Node* head;

bool isEmpty(){
    return head == NULL;
}

void add(int data){
    Node* toAdd = new Node(data);
    
    if(isEmpty()){
        head = toAdd;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = toAdd;    
}

void printAll(){
    if(isEmpty()){
        cout<<"Empty List";
        return;
    }

    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data;
        temp = temp->next;
    }
}

int main(){
    cout<<"Hello ,World";
    add(1);
    add(3);
    printAll();

    return 0;
}
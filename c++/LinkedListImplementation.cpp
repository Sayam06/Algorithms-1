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
        cout<<"Empty List\n";
        return;
    }

    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

void search(int data){
    if(isEmpty()){
        cout<<"Empty List\n";
        return;
    }

    Node* temp = head;

    while(temp != NULL){
        if(temp->data == data){
            cout<<"Element Present\n";
            return;
        }
        temp = temp->next;
    }
    cout<<"Not Present\n";
}

int main(){

    add(12);
    add(1);
    add(22);
    add(10);    
    add(2001);
    add(2002);

    printAll();

    search(10);

    return 0;
}
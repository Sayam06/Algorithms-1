#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* next;
    
    Node(int d){
        data = d;
        next=NULL;
    }    
};

Node* head;

bool isEmpty(){
    return head==NULL;
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

void display(){
    if(isEmpty()){
        cout<<"Empty List";
        return;
    }
    
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void reverse(){ 
  
    Node* temp = head;
    Node* prev = NULL;
    Node* nxt = NULL;

    while(temp != NULL){
        nxt = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nxt;
    }
    head = prev;
}

int main(){

    add(1);
    add(2);
    add(3);
    add(4);
    display();
    reverse();
    display();

    return 0;
}

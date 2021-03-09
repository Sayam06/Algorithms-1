#include <stdio.h> 
#include <stdlib.h> 

struct Node { 
	int data; 
	struct Node* next; 
}; 

struct Node* head;

void add(int data){
    struct Node* toAdd = (struct Node*)malloc(sizeof(struct Node)); 
    toAdd->data = data;
    toAdd->next = NULL;

    if(head == NULL){
        head = toAdd;
        return;
    }
    struct Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = toAdd;
}

void printAll()  { 
    if(head == NULL){
          printf("Empty List");
          return;
    }
    struct Node* temp = head;

    while (temp != NULL) { 
        printf("%d ", temp->data); 
        temp = temp->next; 
    } 
}

void reverse(){
   if(head == NULL){
        printf("Empty List");
        return;
   }
  
   struct Node* temp = head;
   struct Node* nxt = NULL;
   struct Node* prev = NULL;

    while (temp != NULL) { 
        nxt = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nxt; 
    } 
    prev = head;
}

int main()  { 

    add(12);
    add(1);
    add(10);
    reverse();
    printAll();
    

	  return 0; 
} 

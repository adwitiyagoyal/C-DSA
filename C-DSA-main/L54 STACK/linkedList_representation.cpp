#include<iostream>
uding namespace std;

class node{
    public:
        int data;
        node* next;
    
    node(data){
        this->data = data;
        this->next = NULL;
    }
};

void push(node* head,int data){
    if(head == NULL){
        head = new node(data);
    }
    else{
        node* temp = new node(data);
        temp->next = head;
        head = temp;
    }
}

void pop(node* head){
    if(head == NULL){
        return;
    }else{
        node* temp = head->next;
        head->next = NULL;
        delete head;
        head = temp;
    }
}

int top(node* head){
    if(head != NULL){
        return head->data;
    }
    else{
        return -1;
    }
}

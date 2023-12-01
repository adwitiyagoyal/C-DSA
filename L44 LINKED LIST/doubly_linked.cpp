#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
     
    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;

    }
       
    ~Node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory free for : "<<val<<endl;
    }
};

int getlength(Node* &head){
    Node *temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;

}

void insertathead(Node *&head,int d){

    //EMPTY LIST
    if(head==NULL){
        Node *temp=new Node(d);
        head=temp;
    }

    else{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }

}

void insertattail(Node *&tail,int d){

    if(tail==NULL){
        Node *temp=new Node(d);
        tail=temp;
    }
    
    else{
    Node* temp=new Node(d);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
    }

}

void insertatposition(Node* &head,int position,int d){

    if (position ==1){
        insertathead(head,d);
        return;
    }

    Node*temp=head;
    int count=1;

    while(count<(position-1)){
        temp=temp->next;
        count++;
    }

    //for last position
    if(temp->next==NULL){
        insertattail(temp,d);
        return ;
    }
    //FOR OTHER CASES
    Node *toinsert=new Node(d);
    toinsert->next=temp->next;
    temp->next->prev=toinsert;
    temp->next=toinsert;
    toinsert->prev=temp;


}

void deleteNode(Node* &head,int position){
    if(position==1){
        Node *temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }

    else{
        //for last and middle node
        Node *curr=head;
        Node *past=NULL;
        int cnt=1;

        while(cnt<position){
            past=curr;
            curr=curr->next;
            cnt++;
        }

        //for end case
        if(curr->next==NULL){
            past->next=curr->next;
            curr->next=NULL;
            curr->prev=NULL;
            delete curr;
        }
        else{
        past->next=curr->next;
        curr->next->prev=past;
        curr->next=NULL;
        curr->prev=NULL;
        delete curr;
        }
    
    }
}
void print(Node* &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{   
     Node *node1=new Node(10);
     Node *head=node1;
    //Node *head=NULL;
    insertathead(head,34);
    print(head);
    cout<<"length is : "<<getlength(head)<<endl;

    //insert at tail
    Node *tail=node1;
   // Node *tail=NULL;
    insertattail(tail,89);
    print(head);

    insertatposition(head,4,56);
    print(head);
    deleteNode(head,4);
    print(head);
    return 0;
}

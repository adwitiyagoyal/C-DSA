#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    //constructor
    node(int d){
        this->data=d;
        this->next=NULL;
    }

    //destructor
    ~node(){
        int val=this->data;

        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"node of value : "<<val<<" removed"<<endl;
    }
};

void insert(node* &tail,int element,int d){
    //Previously no node is present
    if(tail==NULL){
        node *start=new node(d);
        tail=start;
        start->next=start;
    }
    //if element are present
    else{
        node *temp=new node(d);
        node *curr=tail;
        //assuming element is present in the list

        while(curr->data!=element){
            curr=curr->next;
        }
        temp->next=curr->next;
        curr->next=temp;
        tail=temp; 
    }

}
void print(node* &tail){
    node* temp=tail;
    cout<<temp->data<<" ";
    while(temp->next!=tail){
        temp=temp->next;
        cout<<temp->data<<" ";
    }
    cout<<endl;
}
void delete_node(node* &tail,int value){
    //empty list
    if(tail==NULL){
        cout<<"error"<<endl;
    }
    else{
        node* prev=tail;
        node* curr=tail->next;
        //single element list
        if(curr==prev){
            tail=NULL;
            return;
        }
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        //tail updation if tailis to be removed
        if(tail==curr){
            tail=curr->next;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main(int argc, char const *argv[])
{
    node *tail=NULL;
    insert(tail,5,3);
    print(tail);
    insert(tail,3,6);
    print(tail);
    insert(tail,6,0);
    print(tail);
    insert(tail,0,2);
    print(tail);
    insert(tail,2,4);
    print(tail);
    //cout<<tail->next->next->next->next->next->data<<endl;
    delete_node(tail,4);
    print(tail);
    return 0;
}

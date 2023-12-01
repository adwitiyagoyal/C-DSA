#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this-> data = data;
        this-> next = NULL;
    }
};

void insertathead(Node* &head,int d){
    //new node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertattail(Node * &tail,int d){
    Node *temp=new Node(d);
    tail->next =temp;
    tail=temp;
}
void insertatposition(Node * &head,int position,int d){
    //FOR INSERTING ELEMENT IN STARTING POSITION
    if(position==1){
        //we can use insert at head funcction
        Node *t1=new Node(d);
        t1->next =head;
        head=t1;
        return ; 
    }
    int count=1;
    Node *temp=head;

    while(count<(position-1)){
        temp=temp->next;
        count++;
    }
    //FOR INSERTING ELEMENT IN LAST POSITION
    if(temp->next =NULL){
        insertattail(temp,d);
        return ;
    }
    /* we can insert element at last position using the 
    current insert at position function but the tail will
     not be updated in that funtion so we will use insertattail
    function for this */

    

    Node *insert = new Node(d);
    insert->next = temp->next;
    temp->next = insert;
}

//DELETE THE ELEMENT
void deleteelement(Node* &head,int position){
    if(position==1){
        Node *temp=head;
        head=head->next;
        temp->next=NULL;  //for removing pointer from next element
        delete temp;
    }
    else{
        Node *prev=NULL;
        Node *curr=head;
        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;  //for removing pointer from next element
        delete curr;
    }
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(int argc, char const *argv[])
{
    
    Node *node1 = new Node(10);
    cout << node1 ->data <<endl;
    cout << node1 ->next <<endl;
    // insert from head
    Node *head=node1;
    print(head);

    insertathead(head,12);
    print(head);
    cout<<endl;

    //insert from tail

    Node *tail=node1;
    print(node1);
    insertattail(tail,12);
    print(node1);
    insertattail(tail,15);
    print(node1);
    cout<<endl;

    //insert from a position
    head=node1;
    insertatposition(head,1,45);
    print(head);

    //DELETE ELEMENT 

    deleteelement(head,4);
    print(head);


    return 0;
}

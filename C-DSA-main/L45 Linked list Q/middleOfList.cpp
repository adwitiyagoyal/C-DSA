#include<iostream>
using namespace std;

class Node{
    //properties
    public:
    int data;
    Node *next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};

void insertathead(Node* &head,int d){
    //new node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

 Node* middleNode(Node* head) {
        int cnt=0;
        Node* temp = head;

        while(temp != NULL){
            temp = temp -> next;
            cnt++;
            if(cnt % 2 == 0){
                head = head -> next;
            }
        }
        return head;

    }

int main(int argc, char const *argv[])
{
    Node *node1 = new Node(10);
    insertathead(node1,12);
    insertathead(node1,14);
    insertathead(node1,16);
    insertathead(node1,18);
    insertathead(node1,20);
    
    print(node1);

    cout<<middleNode(node1) -> data <<endl;


    return 0;
}

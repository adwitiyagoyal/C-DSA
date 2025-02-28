#include<iostream>
#include<vector>
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

Node* reverseList(Node* &head ){
    
    Node* prev = NULL;
    Node* curr = head;
    Node* forw = NULL;

    while(curr != NULL){
        forw = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forw;
        
    }

    return prev;
}

bool isPalindrome(Node* head) {
        vector<int> ans;
        Node* temp = head;
        while(temp != NULL){
            ans.push_back(temp->data);
            temp = temp->next;
        }
        int s = 0, e = ans.size()-1;
       
        while(s<e){
            if(ans[s] != ans[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

int main(int argc, char const *argv[])
{
    Node *node1 = new Node(10);
    insertathead(node1,12);
    insertathead(node1,14);
    insertathead(node1,12);
    insertathead(node1,10);
    
    print(node1);

    node1 = reverseList(node1);

    print(node1);
    
    cout<<isPalindrome(node1);
    return 0;
}

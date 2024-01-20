#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
    
    //constructor

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

node* createTree(node* root){
    cout<<"enter the data for the node"<<endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"enter the data for the left node of data "<<data<<endl;
    root->left = createTree(root);

    cout<<"enter the data for the right node of data "<<data<<endl;
    root->right = createTree(root);
}
//1st type of traversal
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        node* temp = q.front();
        if(temp != NULL){
            cout<<temp->data <<" ";
        }
        q.pop();

        if(temp == NULL){
            cout<<endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }

       else{
         if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
       }
    }
}
//2 type of traversal
void reverseOrderTraversal(node* root){
    stack<node*> s;
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        s.push(temp);
        if(temp == NULL && !q.empty()){
            q.push(NULL);
        }
        if(temp && temp->right){ // push right child first
            q.push(temp->right);
        }
        if(temp && temp->left){ // then push left child
            q.push(temp->left);
        }
    }

    while(!s.empty()){
        if(s.top() == NULL){
            cout << endl;
        }
        else{
            cout << s.top()->data << " ";
        }
        s.pop();
    }
}

//3 type of traversal
void inOrder(node* root){
    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}
//4 type of traversal
void preOrder(node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}
//5 type of traversal
void postOrder(node* root){
    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";

}

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"enter the data for root";
    int data;
    cin>>data;

    root = new node(data);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter the data for left node for "<<temp->data;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter the data for right node for "<<temp->data;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->left = new Node(rightData);
            q.push(temp->right);

        }
}
}
int main(int argc, char const *argv[])
{
    node* root = NULL;
    root = createTree(root);
    levelOrderTraversal(root);

    cout<<"inorder traversal is : ";
    inOrder(root);
    cout<<endl;

    cout<<"preorder traversal is : ";
    preOrder(root);
    cout<<endl;

    cout<<"postorder traversal is : ";
    postOrder(root);
    cout<<endl;
    
    cout<<"reverseOrder Travesal is : ";
    reverseOrderTraversal(root);

    return 0;
}
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
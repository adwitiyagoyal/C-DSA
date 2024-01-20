#include<iostream>
using namespace std;

//FOR ONLY CHECKING CIRCULAR LINK LIST
bool isCircular(Node* head){

    if(head == NULL){
        return true;
    }

    Node* temp = head ->next;

    while(temp != NULL && temp != head ){
        temp = temp -> next;
    }

    if(temp == NULL){
        return false;
    }

    return true;
}

//FOR CHECKING ANY LOOP IS THERE I LINK LIST (FLOYD CYCLE)
Node* floydCycleDetection(Node* head){

    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast){
            return slow;  //THIS IS INTERSECTION POINT
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    Node* intersection = floydCycleDetection(head);   
    Node* temp = head;
    while(temp == intersection){
        temp = temp -> next;
        intersection = intersection -> next;
    }

    return temp;
}

Node* removeLoop(Node* head){
    Node* startingNode = getStartingNode(head);
    Node* temp = startingNode;
    while(temp -> next != startingNode){
        temp = temp -> next;
    }
    temp -> next = NULL;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}


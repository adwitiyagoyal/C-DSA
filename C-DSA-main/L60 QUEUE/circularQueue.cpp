#include <bits/stdc++.h> 
class CircularQueue{
    public:
        int* arr;
        int size;
        int front;
        int back;
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        size = n;
        arr = new int[size];
        front = -1;
        back = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        if((front == 0 && back == size-1)||(front - back == 1)){
            return false;
        }
        else if(front == -1){
            back = front = 0;
            arr[front] = value;
        }
        else if(back == size-1 && front != 0){
            back = 0;
            arr[back] = value;
        }
        else{
            back++;
            arr[back] = value;
        }
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        int ans = -1;
        if(front == -1){
            return -1;
        }
        else if(front == back){
            ans = arr[back];
            front = back = -1;
            return ans;
        }
        else if(front == size-1){
            ans = arr[front];
            front = 0;
            return ans;

        }
        else{
            ans = arr[front];
            front++;
            return ans;
        }
    }
};
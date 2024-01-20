#include <bits/stdc++.h> 
class Queue {
    int* arr;
    int size;
    int qfront;
    int back;
public:
    Queue() {
        // Implement the Constructor
         size = 10001;
         arr = new int[size];
         qfront = 0;
         back = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront == back){
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(back == size){
            return;
        }
        else{
            arr[back] = data;
            back++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty()){
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            return ans;
        }
    }

    int front() {
        // Implement the front() function
        if(qfront == back){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};
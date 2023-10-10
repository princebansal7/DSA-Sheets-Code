/*
    @author: princebansal_
*/

// 1. Queue is Linear Data structure
// 2. Can Insert item only one one end (rear : Pichey) => insertion
// 3. Can Delete item from only one end (front : Agey) => deletion
// 4. Works on the principle FIFO: First-in First-Out
// 5. Way to Implement
//    a. using Arrays
//    b. using Dynamic Arrays
//    c. using Linked List

#include <iostream>
using namespace std;
#define nl '\n'

class Queue {
private:
    int capacity, rear, front, size;
    int* array;

public:
    Queue()
    {
        capacity = 0;
        front = rear = -1;
        array = NULL;
        size = 0;
    }

    void createQueue(int cap)
    {
        capacity = cap;
        rear = front = -1;
        array = new int[cap];
    }

    void enQueue(int data) // insertion in Queue also called enqueue
    {
        // TIP: First think about scenarios when insertion isn't possible
        // Cases:
        //     - Queue is full
        //     - array==NULL (array hi ni bna)
        //     - Queue is Empty (special case): as rear and front both have -1 initially.
        //        (if rear==-1 then, it means queue doesn't have any data => front also will
        //        not contain any valid position, so it's also have -1, so in this case we
        //        have to change both front and rear)
        //     - When rear == capacity-1 (special case):

        if (array == NULL) {
            cout << "Queue doesn't exit yet: Invalid Operation" << nl;
        } else if ((front == 0 && rear + 1 == capacity) || (rear + 1 == front)) { // Queue is Full

            // NOTE: just (rear+1 == capacity) is not the correct condition for queue full

            cout << "OVERFLOW" << nl;

        } else if (rear == -1) { // Queue is Empty : (fron==rear) is incorrect condition
            front = rear = 0;
            array[rear] = data;
            size++;

        } else if (rear == capacity - 1) { // when rear reaches at last index. (when queue is not full as front element got deleted)
            rear = 0;
            array[rear] = data;
            size++;

        } else { // normal case
            rear++;
            array[rear] = data;
            size++;
        }
    }

    void deQueue() // deletion in queue happens at front
    {
        if (front == -1 || array == NULL) {
            cout << "UNDERFLOW" << nl;
        } else if (front == rear) {
            front = rear = -1;
            size--;
        } else if (front == capacity - 1) {
            front = 0;
            size--;
        } else {
            front++;
            size--;
        }
    }

    int getFront()
    {
        if (front == -1 || array == NULL) {
            cout << "UNDERFLOW ";
            return -1;
        }
        return array[front];
    }

    int getRear()
    {
        if (front == -1 || array == NULL) {
            cout << "UNDERFLOW ";
            return -1;
        }
        return array[rear];
    }

    bool isQueueEmpty()
    {
        if (front == -1)
            return true;
        return false;
    }

    bool isQueueFull()
    {
        if (((front == 0 && rear + 1 == capacity) || (rear + 1 == front)))
            return true;
        return false;
    }

    int getSize()
    {
        return size;
    }

    ~Queue()
    {
        delete[] array;
    }
};
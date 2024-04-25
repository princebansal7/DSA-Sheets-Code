/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// for Dequeue to be implemented with linked list we have to use Doubly Linked list.
// because in SLL: insertion, deletion at head is O(1). also, insertion is possible in O(1)
// when we maintain two pointers head and last.
// but still deletion at tail is not possible in O(1), as we can't get hold of prev node for deleting
// the Tail.
// That's why we use DOUBLY LINKED LIST

class DequeueLL {
    struct Node {
        Node* prev;
        int data;
        Node* next;

        Node()
        {
            prev = next = NULL;
        }
    };

    Node *front, *rear;
    int size;

public:
    DequeueLL()
    {
        front = rear = NULL;
        size = 0;
    }

    void push_back(int val)
    { // inserting in rear
        Node* newNode = new Node;
        newNode->data = val;
        size++;
        if (rear == NULL) {
            rear = front = newNode;
        } else {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
    }

    void push_front(int val)
    { // inserting at front
        Node* newNode = new Node;
        newNode->data = val;
        size++;
        if (front == NULL) {
            rear = front = newNode;
        } else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }

    void pop_back()
    { // deletion at rear
        if (isEmpty()) {
            cout << "UNDERFLOW" << nl;
        } else if (front == rear) { // only one node
            front = rear = NULL;
            size--;
        } else {
            Node* temp = rear;
            rear = rear->prev;
            delete temp;
            size--;
        }
    }

    void pop_front()
    { // deletion at front
        if (isEmpty()) {
            cout << "UNDERFLOW" << nl;
        } else if (front == rear) { // only one node
            front = rear = NULL;
            size--;
        } else {
            Node* temp = front;
            front = front->next;
            delete temp;
            size--;
        }
    }

    int getRear()
    {
        if (isEmpty()) {
            cout << "Empty Queue ";
            return -1;
        }
        return rear->data;
    }

    int getFront()
    {
        if (isEmpty()) {
            cout << "Empty Queue ";
            return -1;
        }
        return front->data;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    ~DequeueLL()
    {
        while (!isEmpty()) {
            pop_front();
        }
    }
};
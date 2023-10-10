/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Queue {
    struct Node {
        int data;
        Node* next;
    };
    Node *rear, *front;
    int size;

public:
    Queue()
    {
        rear = front = NULL;
        size = 0;
    }

    void enQueue(int val)
    {
        Node* newNode = new Node;
        newNode->data = val;

        if (front == NULL) { // when queue LL empty: both front and rear will change
            newNode->next = front;
            rear = front = newNode;
            size++;
        } else {
            rear->next = newNode;
            rear = newNode;
            size++;
        }
    }

    void deQueue()
    {
        if (front == NULL) {
            cout << "UNDERFLOW" << nl;
        } else {
            Node* temp = front;
            front = front->next;
            if (front == NULL) { // when deleting the only node, rear will also change
                rear = NULL;
            }
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

    bool isEmpty()
    {
        return (getSize() == 0);
    }

    int getSize()
    {
        return size;
    }

    ~Queue()
    {
        while (!isEmpty()) {
            deQueue();
        }
    }
};
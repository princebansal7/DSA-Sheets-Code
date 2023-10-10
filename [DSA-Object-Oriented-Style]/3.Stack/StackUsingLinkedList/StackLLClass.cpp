/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// Here we'll not do inheritance and will make Stack from scratch using Linked List

class Stack {
    struct Node {
        int data;
        Node* next;
    };

    Node* top;

public:
    Stack()
    {
        top = NULL;
    }

    void push(int value)
    {
        // element will always inserted from top => same as inserting elements at start in Linked list

        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }

    void pop()
    {
        // Delete at start in linked list same as Stack pop
        if (top == NULL) {
            cout << "Empty: UNDERFLOW" << nl;
        } else {
            if (top->next == NULL) { // single node
                delete top;
                top = NULL;
            } else {
                Node* temp = top; // temp is 1st node
                top = top->next; // top is now 2nd node
                delete temp; // 1st node deleted (top deleted and updated)
            }
        }
    }

    int peek()
    {
        if (top == NULL) {
            cout << "UNDERFLOW: ";
            return -1;
        }
        return top->data;
    }

    bool isEmpty()
    {
        if (top == NULL)
            return true;
        return false;
    }

    ~Stack()
    {
        while (top != NULL) {
            pop();
        }
    }
};
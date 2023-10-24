/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

struct Node {
    int data;
    Node* next;

    Node(int data = 0)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {

protected: // so that it can be accessible in child classes
    Node* head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void insertAtStart(int value)
    {
        Node* temp = new Node(value);
        if (head == NULL) {
            head = temp;
        } else {
            temp->next = head;
            head = temp;
        }
    }

    void insertAtEnd(int value)
    {
        Node* temp = new Node(value);
        Node* last = head;
        if (head == NULL) {
            head = temp;
        } else {
            while (last->next != NULL) {
                last = last->next;
            }
            last->next = temp;
        }
    }

    void showLinkedList()
    {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << nl;
    }

    void deleteStart()
    {
        if (head == NULL) {
            cout << "Empty Linked List" << nl;
        } else {
            Node* toBeDeleted = head;
            head = head->next;
            delete toBeDeleted;
        }
    }

    ~LinkedList()
    {
        while (head)
            deleteStart();
    }
};

// int main()
// {
//     LinkedList l1;
//     l1.insertAtEnd(10);
//     l1.insertAtEnd(20);
//     l1.insertAtEnd(30);
//     l1.insertAtEnd(40);
//     l1.showLinkedList();
//     l1.insertAtStart(69);
//     l1.showLinkedList();
//     l1.deleteStart();
//     l1.showLinkedList();

//     return 0;
// }
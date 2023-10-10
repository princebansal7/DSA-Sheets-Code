/*
    @author: princebansal_

*/

#include <iostream>
using namespace std;
#define nl "\n"

class DoublyLL {
private:
    struct Node {
        Node* prev;
        int data;
        Node* next;
    };

    Node* head;

public:
    DoublyLL()
    {
        head = NULL;
    }

    void insertAtBeg(int value)
    {
        Node* NewNode = new Node;
        NewNode->prev = NULL;
        NewNode->data = value;
        NewNode->next = head;
        if (head != NULL) // if list is not empty
            head->prev = NewNode;
        head = NewNode;
    }

    void insertAtEnd(int value)
    {
        Node* NewNode = new Node;
        NewNode->next = NULL;
        NewNode->data = value;
        if (head == NULL) {
            NewNode->prev = NULL;
            head = NewNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            NewNode->prev = temp;
            temp->next = NewNode;
        }
    }

    void deleteFirst()
    {
        if (head == NULL)
            cout << "Empty list" << nl;
        else {
            Node* temp = head;
            head = temp->next;
            if (temp->next != NULL) // => atleast 2 node exists
                temp->next->prev = NULL; // or head->prev = NULL
            delete temp;
        }
    }

    void deleteEnd()
    {
        if (head == NULL) {
            cout << "Empty list" << nl;
        } else if (head->next == NULL) { // single node
            head = NULL;
        } else {
            Node* last = head;
            while (last->next != NULL) {
                last = last->next;
            }
            last->prev->next = NULL;
            delete last;
        }
    }

    void insertAfter(int element, int value)
    {
        Node* temp = searchNode(element);
        if (temp != NULL) {
            Node* newNode = new Node;
            newNode->data = value;
            newNode->next = temp->next;
            newNode->prev = temp;
            if (temp->next != NULL) // if not last node, then we have to update prev (of the next node) too
                temp->next->prev = newNode;
            temp->next = newNode;
        } else {
            cout << "Element: " << element << " Not Found" << nl;
        }
    }

    void DeleteSpec(int element)
    {
        if (head == NULL)
            cout << "Empty Linked List" << nl;
        else {
            Node* temp1 = head; // will point to node we want to delete
            Node* temp2 = NULL; // will point to previous node which we want to delete

            while (temp1 != NULL) {
                if (temp1->data == element) {
                    break;
                }
                temp2 = temp1;
                temp1 = temp1->next;
            }
            if (temp1 == NULL)
                cout << "Element not found" << nl;
            else {
                // element found
                if (temp2 == NULL) // Only 1 node in list
                    head = temp1->next;
                else
                    temp2->next = temp1->next;
                delete temp1;
            }
        }
    }

    Node* searchNode(int value) // Node is private => searchNode() can't be called outside the class
    {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == value)
                return temp;
            temp = temp->next;
        }
        return NULL;
    }

    void printDll()
    {
        if (head == NULL) {
            cout << "Empty List !" << nl;
            return;
        }
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << nl;
    }

    void printReverseDll()
    {
        if (head == NULL) {
            cout << "Empty List (reverse)" << nl;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        while (temp->prev != NULL) {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << temp->data << nl;
    }

    ~DoublyLL()
    {
        while (head)
            deleteFirst();
    }
};
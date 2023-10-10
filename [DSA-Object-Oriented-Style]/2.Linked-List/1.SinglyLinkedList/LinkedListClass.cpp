/*
    @author: princebansal_

*/

#include <iostream>
using namespace std;
#define nl "\n"

class SinglyLL {
private:
    struct Node {
        int data;
        Node* next;
    };

    Node* head;

public:
    SinglyLL()
    {
        head = NULL;
    }
    // TIP: Always make changes in the new node 1st

    void insertAtStart(int value)
    {
        Node* NewNode = new Node;
        NewNode->data = value;
        NewNode->next = head;

        head = NewNode;
    }

    void insertAtEnd(int value)
    {
        Node* NewNode = new Node;
        NewNode->data = value;
        NewNode->next = NULL;

        if (head == NULL) {
            head = NewNode;
        } else {
            Node* temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = NewNode;
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

    void deleteFirst()
    {
        if (head == NULL) {
            cout << "Empty Linked List" << nl;
        } else {
            Node* temp = head;
            head = temp->next;
            delete temp;
        }
    }

    void deleteEnd()
    {
        if (head == NULL)
            cout << "Empty Linked list" << nl;
        else {
            Node* temp1 = head; // will be pointing to last node (When list have atleast 2 nodes)
            Node* temp2 = NULL; // will be pointing to 2nd last node (When list have atleast 2 nodes)

            while (temp1->next != NULL) {
                temp2 = temp1;
                temp1 = temp1->next;
            }
            if (temp2 == NULL) // for case: if LL have only 1 node
                head = NULL;
            else
                temp2->next = NULL; // making 2nd last node as last node by assigning NULL

            delete temp1; // releasing last node's memory
        }
    }

    void insertAfter(int element, int value)
    {
        Node* temp = searchNode(element); // using searchNode() to find node to which after we have to insert new node
        if (temp != NULL) {
            Node* NewNode = new Node;
            NewNode->data = value;
            NewNode->next = temp->next;
            temp->next = NewNode;
        } else {
            cout << "Element not Found" << nl;
        }
    }

    // Will delete the 1st occurence if multple occurences of elements present.

    void deleteSpec(int element)
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

    void printList()
    {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << nl;
    }

    ~SinglyLL()
    {
        while (head)
            deleteFirst();
    }
};

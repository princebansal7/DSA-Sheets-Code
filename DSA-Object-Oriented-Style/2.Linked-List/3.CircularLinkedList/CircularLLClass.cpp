/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

/*
In circular linked list, last node's next contains the address of 1st node
Hence, if head pointer points to 1st node then operations like insertion and
deletion at 1st and last node becomes costlier as we had to make changes in
last node too (comparing to singly linked list). But the amount of memory
consumed is same.

=> so why circular linked list ?
   if we make a little change, and instead of 'head' pointer poiting to 1st node,
   if now it points to last node, then, above mostly operations becomes O(1)
   i.e, more efficient.
*/

class CircularLL {
    struct Node {
        int data;
        Node* next;
    };
    Node* last; // as 'head' ponter will points to last node, we name it as 'last' instead of 'head'

public:
    CircularLL()
    {
        last = NULL;
    }

    // TC: O(1)
    void insertBeg(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        if (last == NULL) { // if LL is empty => newNode will be 1st node
            newNode->next = newNode; // this one and only node will points to istelf
            last = newNode; // and last will be this only node whic is present
        } else {
            newNode->next = last->next; // newNode becomes the 1st node
            last->next = newNode; // so, last points to 1st node (as CLL condition)
        }
    }

    // TC: O(1)
    void insertLast(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        if (last == NULL) { // if LL is empty => newNode will be 1st node
            newNode->next = newNode; // this one and only node will points to itself
            last = newNode; // and last will points to this only node
        } else {
            newNode->next = last->next;
            last->next = newNode;
            last = newNode; // newNode inserted at last => last points to new last node
        }
    }

    // TC: O(1)
    void deleteFirst()
    {
        if (last == NULL) {
            cout << "UNDERFLOW: Can't delete" << nl;
        } else {
            if (last->next == last) { // have only 1 node
                delete last;
                last = NULL;
            } else {
                Node* temp = last->next; // temp is 1st node now
                last->next = temp->next; // last points to 2nd node
                delete temp; // 1st node deleted
            }
        }
    }

    // TC: O(N) (as need to traverse till last node)
    void deleteLast()
    {
        if (last == NULL) {
            cout << "UNDERFLOW: Can't delete" << nl;
        } else {
            if (last->next == last) { // have only 1 node
                delete last;
                last = NULL;
            } else {
                Node* curr = last->next; // curr is 1st node now
                while (curr->next != last) { // going till 2nd last node
                    curr = curr->next;
                }
                // curr is 2nd last node now.

                curr->next = last->next; // curr is pointing to 1st node (=> curr now becomes the last node)
                delete last; // old last node deleted
                last = curr; // now last is pointing to new Last node
            }
        }
    }

    // will be helpul in insertAtSpec() and deleteAtSpec()
    Node* searchNode(int element)
    {
        Node* curr = last->next;
        while (curr != last) {
            if (curr->data = element) {
                return curr;
            }
            curr = curr->next;
        }
        if (curr->data = last->data) {
            return curr;
        }
        return NULL;
    }

    // NOTE: InsertAtSpec() and DeleteAtSpec() is same as singly Linked list:

    void insertAfter(int element, int value)
    {
        // TODO
    }

    // Will delete the 1st occurence if multple occurences of elements present.

    void deleteSpec(int element)
    {
        // TODO
    }

    void printCLL()
    {
        if (last == NULL) {
            cout << "Empty List" << nl;
            return;
        }

        Node* temp = last->next; // temp pointing to 1st node

        while (temp != last) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data; // as now temp==last => printing last node's data too
        cout << nl;
    }

    ~CircularLL()
    {
        while (last)
            deleteFirst();
    }
};

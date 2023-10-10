#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *head) {   // TC: O(n) , SC: O(1)

    if (head == NULL) {
        cout << "Empty & !!\n";
    }

    cout << "Linked List is: \n";

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *InsertAtEnd(Node *head, int x) {  // O(n) Operation

    if (head == NULL) {   // modifies head only when Linked list is empty
        head = new Node(x);
        return head;
    }

    Node *temp = new Node(x); // new node, which is to be inserted

    Node *curr = head;
    while (curr->next != NULL) {  // going till last node [IMP for insertion at end]
        curr = curr->next;
    }
    curr->next = temp;  // linking last node with new node [as last node and earlier node as 2nd last node]
    temp = head;
    return temp; // or direct return head
}

int main()
{

    Node *head = NULL;
    printList(head);

    head = InsertAtEnd(head, 10);
    printList(head);
    head = InsertAtEnd(head, 20);
    printList(head);
    head = InsertAtEnd(head, 69);
    printList(head);
    head = InsertAtEnd(head, 40);
    printList(head);
    head = InsertAtEnd(head, 90);
    printList(head);

    delete head;

    return 0;
}
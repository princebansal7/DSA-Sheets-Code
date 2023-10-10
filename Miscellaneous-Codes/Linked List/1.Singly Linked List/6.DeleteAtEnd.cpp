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
        cout << "Empty!!\n\n";
    }

    cout << "Linked List is: \n";

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n\n";
}

Node *DeleteAtEnd(Node *head) {  // O(n) Operation

    Node *temp = NULL;
    Node *curr = head;

    if (head == NULL) {  // if 0 Node
        cout << "Empty List !!\n\n";
        return head;
    }
    else if (curr->next == NULL) { // if Only 1 Node
        temp = curr;
        delete temp;  // deleting only node (i.e, head/first node)
        return NULL;  // as now No node present, return NULL
    }
    else {
        while (curr->next->next != NULL) { // going till 2nd last node

            curr = curr->next; // update curr with next node for each iteration

        }
        temp = curr->next; // upating temp with curr's next node i.e, Last node
        curr->next = NULL; // updating 2nd last node (soon to be last node with NULL) [Imp Step]
        delete temp;  // deleting last Node
    }
    return head;
}

int main()
{
    Node *head = NULL;
    printList(head);
    head = DeleteAtEnd(head);

    head = new Node(69);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(880);

    printList(head);

    head = DeleteAtEnd(head);
    printList(head);
    head = DeleteAtEnd(head);
    printList(head);
    head = DeleteAtEnd(head);
    printList(head);
    head = DeleteAtEnd(head);
    printList(head);
    head = DeleteAtEnd(head);
    printList(head);

    // delete head;

    return 0;
}

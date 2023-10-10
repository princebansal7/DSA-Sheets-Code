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

Node *DeleteAtBeg(Node *head) {  // O(1) Operation

    Node *temp = NULL;

    if (head == NULL) {
        cout << "Empty List !!\n\n";
        return temp;
    }
    else {
        temp = head->next; // Pointing temp to 2nd node
        delete head;   // deleting first node
    }
    return temp;   // returning 2nd node as head [as 2nd node is now 1st node]
}

int main()
{
    Node *head = NULL;
    printList(head);
    head = DeleteAtBeg(head);

    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    printList(head);

    head = DeleteAtBeg(head);
    printList(head);
    head = DeleteAtBeg(head);
    printList(head);
    head = DeleteAtBeg(head);
    printList(head);
    head = DeleteAtBeg(head);
    printList(head);
    head = DeleteAtBeg(head);
    printList(head);

    delete head;

    return 0;
}
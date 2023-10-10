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

Node *InsertAtBeg(Node *head, int x) {  // O(1) Operation

    /*______WAY-1____________________

        if (head == NULL) {
            head = new Node(x);
            return head;
        }

        Node *temp1 = new Node(x);
        Node *temp2 = head;
        head = temp1;
        head->next = temp2;
        return head;
    ______________________________*/

    //___ WAY-2_______________

    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

int main()
{

    Node *head = NULL;
    printList(head);

    head = InsertAtBeg(head, 10);
    printList(head);
    head = InsertAtBeg(head, 20);
    printList(head);
    head = InsertAtBeg(head, 69);
    printList(head);
    head = InsertAtBeg(head, 40);
    printList(head);

    printList(head);

    delete head;

    return 0;
}
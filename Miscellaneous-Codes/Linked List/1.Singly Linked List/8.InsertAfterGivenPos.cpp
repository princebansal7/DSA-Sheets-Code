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
        cout << "Empty!!\n";
    }

    cout << "Linked List is: \n";

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n\n";
}

Node *InsertAfterPos(Node *head, int pos, int val) {

    Node *temp = new Node(val);

    if (pos == 1) { // only 1 node
        temp->next = head->next;
        head->next = temp;
        return head;
    }

    Node *curr = head;

    for (int i = 1; i <= pos - 1 && curr != NULL ; i++) {
        curr = curr->next;
    }
    if (curr == NULL) // if pos is > size+1 => postion doesn't exits
        return head;

    temp->next = curr->next; // linking the new node with curr's next node
    curr->next = temp;      // linking curr node node new node
    return head;
}


int main()
{
    /*
            I/P:
                7
                1 69
                2 69
                3 69
                4 69
                5 69
                6 69
                7 100
            O/P:
                Linked List is:
                10 20 30 40 50

                Linked List is:
                10 69 20 30 40 50

                Linked List is:
                10 20 30 40 50

                Linked List is:
                10 20 69 30 40 50

                Linked List is:
                10 20 30 40 50

                Linked List is:
                10 20 30 69 40 50

                Linked List is:
                10 20 30 40 50

                Linked List is:
                10 20 30 40 69 50

                Linked List is:
                10 20 30 40 50

                Linked List is:
                10 20 30 40 50 69

                Linked List is:
                10 20 30 40 50

                Linked List is:
                10 20 30 40 50

                Linked List is:
                10 20 30 40 50

                Linked List is:
                10 20 30 40 50

    */


    int t; cin >> t;
    while (t--) {
        Node *head = NULL;

        head = new Node(10);
        head->next = new Node(20);
        head->next->next = new Node(30);
        head->next->next->next = new Node(40);
        head->next->next->next->next = new Node(50);
        int pos, val; cin >> pos >> val;
        printList(head);

        head = InsertAfterPos(head, pos, val);

        printList(head);

    }

    return 0;
}

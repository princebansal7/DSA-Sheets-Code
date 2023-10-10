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
        cout << "Empty List!!\n";
    }

    cout << "Current Linked List is: \n";

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n\n";
}


//_________ My Way______________________________________________________________________________

Node *InsertSorted(Node *head, int val) {

    Node *temp = new Node(val);

    if (head == NULL) {  // empty list => insert that new node
        head = temp;
        return head;
    }

    if (temp->data < head->data) { // case: if new node val is less than head node => make new node as head
        temp->next = head;
        return temp;
    }

    Node *curr = head;

    while (curr->next != NULL) {

        if (val < curr->next->data) {  // handling all the nodes
            temp->next = curr->next;
            curr->next = temp;
            return head;
        }
        curr = curr->next;
    }                               // at the end of while loop, curr is pointing to last node

    if (curr->next == NULL && temp->data > curr->data) { // handling case: where inserted value is greater than all of the values in linked list
        curr->next = temp;
        temp->next = NULL;
    }
    return head;
}

//__________A little short way_______________________________________________

Node *InsertSortedShortWay(Node *head, int val) {

    Node *temp = new Node(val);

    if (head == NULL) {  // empty list => insert that new node
        head = temp;
        return head;
    }

    if (temp->data < head->data) { // case: if new node val is less than head node => make new node as head
        temp->next = head;
        return temp;
    }

    Node *curr = head;

    while (curr->next != NULL  &&  curr->next->data < val) {

        curr = curr->next;

    }

    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main()
{

#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif

    int t; cin >> t;  // for test cases
    int cnt = 1;
    while (t--) {


        cout << "TEST CASE " << cnt << ":---------------------" << "\n\n";

        Node *head = NULL;

        head = new Node(10);
        head->next = new Node(20);
        head->next->next = new Node(30);
        head->next->next->next = new Node(40);
        head->next->next->next->next = new Node(50);

        int val; cin >> val;

        cout << "Before: ";
        printList(head);

        head = InsertSortedShortWay(head, val);

        cout << "After: ";
        printList(head);

        cnt++;   // ignore

    }
    return 0;
}
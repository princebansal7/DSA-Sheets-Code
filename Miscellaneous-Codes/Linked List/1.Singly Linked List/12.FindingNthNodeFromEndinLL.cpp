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

//_____________WAY-1 O(n)_____________________________________________________

int NthNodeFromEnd(Node *head, int posEnd) {

    int count = 0;
    Node *curr = NULL;

    for (curr = head; curr != NULL; curr = curr->next)
        count++;

    if (posEnd > count)
        return -1;

    int move = count - posEnd + 1; // finding end position

    curr = head;

    for (int i = 1; i < move; i++)
        curr = curr->next;
    return curr->data;
}

//________WAY-2 (Using Two-Pointer approach) O(n)_______________________________

void NthNodeTwoPointer(Node *head, int posEnd) {
    /* CONCEPT:

        steps:

        1. first pointer: move first pointer "posEnd" positions ahead
        2. second pointer: start second pointer from head
        3. Now move both first and second pointer with same rate (i.e, by 1-1 positions),
            => now, when first pointer reaches at the end (i.e, NULL after the last node),
            2nd pointer will be at the required 'nth node from the end'
            [here posEnd = nth position from end]
    */
    if (head == NULL)
        return;

    Node *first = head;

    for (int i = 1; i <= posEnd; i++) { // Moving first pointer n positions ahead (step 1)

        if (first == NULL) // if nth pos is greater than number of nodes => Not present
            return;

        first = first->next;
    }
    Node *second = head;
    while (first != NULL) {   // (step 2,3)
        first = first->next;
        second = second->next;
    }
    cout << second->data << endl;
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
        head->next->next->next->next->next = new Node(60);

        printList(head);

        int posEnd; cin >> posEnd;

        int ans = NthNodeFromEnd(head, posEnd);

        if (ans == -1)
            cout << posEnd << "th from END is: N/A" << endl;
        else
            cout << posEnd << "th from END is: " << ans << endl;

        cout << endl;

        cout << "[WAY-2] Answer: ";
        NthNodeTwoPointer(head, posEnd);

        cout << endl;

        cnt++;   // ignore

    }
    return 0;
}
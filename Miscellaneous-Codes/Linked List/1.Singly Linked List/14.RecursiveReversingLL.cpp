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

    cout << "Current LL is: \n";

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n\n";
}

//_____________WAY-1_________________________

Node *RecReverse1(Node *head) {

    if (head == NULL || head->next == NULL) // Base case
        return head;

    Node *remainingHead = RecReverse1(head->next);

    Node *remainingTail = head->next;
    remainingTail->next = head;
    head->next = NULL;
    return remainingHead;
}

//_________WAY-2 (similar to Iterative but in recusive way)_____________________________

Node *RecReverse2(Node *curr, Node *prev) {

    if (curr == NULL)
        return prev;

    Node *temp = curr->next;
    curr->next = prev;
    return RecReverse2(temp, curr);
}

int main()
{

#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif

    int t; cin >> t;  // for test cases
    int cnt = 1;

    while (t--) {


        cout << "TEST CASE " << cnt << ":-------------------" << "\n\n";

        Node *head = NULL;

        head = new Node(10);
        head->next = new Node(20);
        head->next->next = new Node(30);
        head->next->next->next = new Node(40);
        head->next->next->next->next = new Node(50);
        head->next->next->next->next->next = new Node(60);

        cout << "\t[WAY-1]\n";
        cout << "Before Reversing ";
        printList(head);

        head = RecReverse1(head);

        cout << "After Reversing ";
        printList(head);


        cout << "\t[WAY-2]\n";
        cout << "Before Reversing ";
        printList(head);

        Node *prev = NULL;
        head = RecReverse2(head, prev);

        cout << "After Reversing ";
        printList(head);

        cout << endl;
        cnt++;   // ignore
    }
    return 0;
}
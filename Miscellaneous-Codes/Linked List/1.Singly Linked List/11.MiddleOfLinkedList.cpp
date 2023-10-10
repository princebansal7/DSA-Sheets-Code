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

//_____Naive Way-1____________________________________

int Middle(Node *head) {

    int count = 0;
    Node *curr = head;

    if (head == NULL)
        return -1;

    if (head->next == NULL)
        return head->data;

    while (curr != NULL) {
        count++;
        curr = curr->next;
    }
    int mid = count / 2 + 1;
    curr = head;
    for (int i = 1; i <= mid; i++) {
        if (i == mid)
            return curr->data;
        curr = curr->next;
    }
    return -1;
}

//_______________Naive Way-2 (Better than above)________________________

void printMiddle(Node *head) {
    int count = 0;
    Node *curr = NULL;

    if (head == NULL)
        return;

    for (curr = head; curr != NULL; curr = curr->next) {
        count++;
    }

    curr = head;

    for (int i = 1; i <= count / 2; i++)
        curr = curr->next;
    cout << curr->data;
}

//_________Effiecient method - Way-3_(slow-fast pointer method)_______

void EfficientMiddle(Node *head) {

    /* CONCEPT:

        slow pointer: moves 1 node at a time
        fast pointer: moves 2 node at a time
        => when fast pointer reaches at end, slow pointer reaches at middle

        NOTE:
        Odd Node LL:  when fast pointer reaches at last node ,stop and return slow pointer pointed node (that's our middle node)
        Even Node LL: when fast pointer reaches at NULL (i.e, after last node) ,stop and return slow pointer pointed node (that's our middle node)
    */
    if (head == NULL) {
        return;
    }
    Node *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data;
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

        int ans = Middle(head);
        cout << "[WAY-1] Middle of LL is: " << ans << endl;

        cout << "[WAY-2] Middle of LL is: ";
        printMiddle(head);

        cout << endl;
        cout << "[WAY-3] Middle of LL is: ";
        EfficientMiddle(head);

        cnt++;   // ignore

    }
    return 0;
}
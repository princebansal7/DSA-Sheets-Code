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

Node *RemoveDup(Node *head) {

    if (head == NULL || head->next == NULL)
        return head;

    Node *curr = head;

    while (curr != NULL && curr->next != NULL) {

        if (curr->data == curr->next->data) {
            Node *temp = curr->next;
            curr->next = temp->next;
            delete temp;
        }
        else
            curr = curr->next;
    }
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


        cout << "TEST CASE " << cnt << "__________________" << "\n\n";

        Node *head = NULL;

        head = new Node(10);
        head->next = new Node(20);
        head->next->next = new Node(20);
        head->next->next->next = new Node(30);
        head->next->next->next->next = new Node(30);
        head->next->next->next->next->next = new Node(30);

        cout << "Before:\n";
        printList(head);

        head = RemoveDup(head);

        cout << "After:\n";
        printList(head);

        cout << endl;
        cnt++;   // ignore
    }
    return 0;
}
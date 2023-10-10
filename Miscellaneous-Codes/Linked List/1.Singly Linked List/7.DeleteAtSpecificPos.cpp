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


Node * DeleteSpec(Node *head, int pos)
{
    Node *temp = NULL;
    Node *curr = head;

    if (head == NULL) {
        return head;
    }
    else if (pos == 1) {
        temp = head->next;
        delete head;
        return temp;
    }
    else {
        int i = 1;
        while (i < pos - 1) {

            curr = curr->next;
            i++;
        }
        temp = curr->next;
        curr->next = temp->next;
        delete temp;
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


        cout << "TEST CASE " << cnt << ":-------------------" << "\n\n";

        Node *head = NULL;

        head = new Node(10);
        head->next = new Node(20);
        head->next->next = new Node(30);
        head->next->next->next = new Node(40);
        head->next->next->next->next = new Node(50);
        head->next->next->next->next->next = new Node(60);

        printList(head);

        int pos; cin >> pos;

        head = DeleteSpec(head, pos);

        printList(head);

        cout << endl;
        cnt++;   // ignore

    }
    return 0;
}
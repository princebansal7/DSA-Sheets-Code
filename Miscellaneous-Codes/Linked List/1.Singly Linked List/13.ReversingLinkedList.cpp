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

//_____WAY-1 (Using Temp Array)_____________________________________

Node *ReverseList(Node *head) {
    vector<int> temp;
    Node *curr = head;

    if (head == NULL)
        return NULL;

    while (curr != NULL) {
        temp.push_back(curr->data);
        curr = curr->next;
    }

    curr = head;

//______Way-1___________

    for (curr = head; curr != NULL; curr = curr->next) {
        curr->data = temp.back();
        temp.pop_back();
    }

    /*_____ Way-2___________

       int i = temp.size() - 1;

       while (curr != NULL) {
           curr->data = temp[i];
           i--;
           curr = curr->next;
       }

    _______________________*/

    return head;
}

//___________WAY-2 (Changing the links itself)____________________________

Node *ReverseListEffi(Node *head) {
    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL) {
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;  // prev is new head
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


        // cout << "[WAY-1] Before Reversing ";
        // printList(head);

        // head = ReverseList(head);

        // cout << "[WAY-1] After Reversing ";
        // printList(head);


        cout << "[WAY-2] Before Reversing ";
        printList(head);

        head = ReverseListEffi(head);

        cout << "[WAY-2] After Reversing ";
        printList(head);

        cout << endl;
        cnt++;   // ignore

    }
    return 0;
}
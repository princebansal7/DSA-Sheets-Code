#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node* head)
{ // TC: O(n) , SC: O(1)

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void printWithRecursion(Node* head)
{ // TC: O(n) , SC: O(n)

    if (head == NULL)
        return;
    cout << head->data << " ";
    printWithRecursion(head->next);
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(69);
    head->next->next = new Node(90);
    head->next->next->next = new Node(100);

    printList(head);
    printWithRecursion(head);

    delete head;

    return 0;
}
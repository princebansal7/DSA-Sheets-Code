#include <iostream>
using namespace std;
#define nl '\n'

class Node {
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
    Node(int val, Node* ptr)
    {
        data = val;
        next = ptr;
    }
};

void printLL(Node* head)
{
    if (head == NULL) {
        cout << "Empty list" << nl;
        return;
    }
    cout << "linked list is: " << nl;
    Node* move = head;
    while (move != NULL) {
        cout << move->data << " ";
        move = move->next;
    }
    cout << nl;
}

void freeLL(Node* head)
{
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

Node* insertAtHead(Node* head, int val)
{
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
    return head;
}

Node* insertAtLast(Node* head, int val)
{
    Node* newNode = new Node(val);
    // when LL is empty
    if (head == NULL) {
        head = newNode;
    }
    // have only one node
    else if (head->next == NULL) {
        head->next = newNode;
    }
    // non-empty list with multiple node
    else {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }
    return head;
}

Node* insertAtPos(Node* head, int k, int val)
{
    if (head == NULL) {
        if (k == 1)
            return new Node(val);
        else
            return head;
    }
    if (k == 1) {
        return new Node(val, head);
    }

    return head;
}

int main()
{
    // Node* head = new Node(1);
    Node* head = nullptr;
    printLL(head);
    head = insertAtHead(head, 90);
    // head = insertAtHead(head, 89);
    // printLL(head);
    // head = insertAtLast(head, 11);
    printLL(head);
    int pos;
    cout << "Enter position (1 to N+1): ";
    cin >> pos;
    head = insertAtPos(head, pos, 69);
    printLL(head);

    freeLL(head);
    cout << nl;
    return 0;
}
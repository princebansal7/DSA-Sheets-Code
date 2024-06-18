/*
    @author: princebansal_
*/

#include <iostream>
#include <vector>
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

Node* arrayToLinkedlist(vector<int>& arr)
{
    if (arr.empty())
        return NULL;
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* move = new Node(arr[i]);
        temp->next = move;
        temp = move;
    }
    return head;
}

void freeLL(Node* head)
{
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// Also linked list traversal
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
}

int main()
{
    vector<int> arr = { 1, 2, 3, 4, 56, 7, 0 };
    Node* head = arrayToLinkedlist(arr);
    printLL(head);
    freeLL(head);
    cout << nl;
    return 0;
}

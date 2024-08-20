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

// search
bool searchInLL(Node* head, int val)
{
    if (head == NULL) {
        return false;
    }
    Node* move = head;
    while (move != NULL) {
        if (move->data == val)
            return true;
        move = move->next;
    }
    return false;
}

int main()
{
    vector<int> arr = { 34, 56, 33, 12, 69, 40, 90 };
    Node* head = arrayToLinkedlist(arr);

    int val;
    cout << "Enter value you want to search: ";
    cin >> val;

    searchInLL(head, val) ? cout << val << " is Present" << nl : cout << val << " is not present" << nl;

    freeLL(head);
    cout << nl;
    return 0;
}

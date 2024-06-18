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

// length of LL
int length(Node* head)
{
    int cnt = 0;
    if (head == NULL) {
        return 0;
    }
    Node* move = head;
    while (move != NULL) {
        cnt++;
        move = move->next;
    }
    return cnt;
}

int main()
{
    vector<int> arr = {};
    Node* head = arrayToLinkedlist(arr);
    cout << "Length of LL: " << length(head) << nl;

    freeLL(head);
    cout << nl;
    return 0;
}

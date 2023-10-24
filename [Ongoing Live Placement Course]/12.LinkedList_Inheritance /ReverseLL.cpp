
/*
    @author: princebansal_
*/

#include "./LLClass.cpp"
#include <iostream>
using namespace std;
#define nl '\n'

class LLReverse : public LinkedList {
private:
    // Approach 1: TC: O(N), SC: O(N) of function calls stack

    void reverse(Node* curr, Node* prev)
    {
        // base case
        if (curr == NULL) {
            head = prev;
            return;
        }
        Node* temp = curr->next;
        reverse(temp, curr);
        curr->next = prev;
    }

    // Approach 2: TC: O(N), SC: O(N) of functions calls stack

    Node* reverse2(Node* head)
    {
        if (head == NULL || head->next == NULL)
            return head;

        Node* smallListHead = reverse2(head->next);
        head->next->next = head;
        head->next = NULL;

        return smallListHead;
    }

public:
    // TC: O(N), SC: O(1)
    // Iterative Solution
    void reverseLL()
    {
        Node* curr = head;
        Node* prev = NULL;
        while (curr != NULL) {
            Node* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        head = prev;
    }

    // Recursive Solution

    void reverseLLRecursion()
    {
        // Approach-1

        // Node* curr = head;
        // Node* prev = NULL;
        // reverse(curr, prev);

        // Approach-2

        head = reverse2(head);
    }
};

int main()
{
    LLReverse l1;
    l1.insertAtStart(10);
    l1.insertAtEnd(20);
    l1.insertAtEnd(30);
    l1.insertAtEnd(40);
    l1.showLinkedList();
    l1.insertAtStart(69);
    l1.showLinkedList();
    l1.deleteStart();
    l1.showLinkedList();
    cout << "After Reversing: " << nl;
    l1.reverseLL();
    l1.showLinkedList();
    cout << "After Reversing using Recursion: " << nl;
    l1.reverseLLRecursion();
    l1.showLinkedList();

    l1.insertAtEnd(100);
    l1.showLinkedList();

    return 0;
}
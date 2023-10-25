
/*
    @author: princebansal_
*/

#include "./LLClass.cpp"
#include <iostream>
using namespace std;
#define nl '\n'

class LLReverseInK : public LinkedList {

    Node* reverse(Node* head)
    {
        if (head == NULL || head->next == NULL)
            return head;

        Node* smallListHead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;

        return smallListHead;
    }

public:
    void reverseRecursive()
    {
        head = reverse(head);
    }
};

int main()
{
    LLReverseInK l1;
    l1.insertAtEnd(20);
    l1.insertAtEnd(30);
    l1.insertAtStart(10);
    l1.insertAtEnd(40);
    l1.showLinkedList();
    l1.reverseRecursive();
    l1.showLinkedList();

    return 0;
}
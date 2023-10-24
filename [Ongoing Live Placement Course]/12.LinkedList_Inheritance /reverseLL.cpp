
/*
    @author: princebansal_
*/

#include "./LLClass.cpp"
#include <iostream>
using namespace std;
#define nl '\n'

class LLReverse : public LinkedList {

public:
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

    return 0;
}
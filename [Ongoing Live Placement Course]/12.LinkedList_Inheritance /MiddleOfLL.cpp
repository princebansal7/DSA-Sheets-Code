
/*
    @author: princebansal_
*/

#include "./LLClass.cpp"
#include <iostream>
using namespace std;
#define nl '\n'

class LLMiddle : public LinkedList {
private:
    int lengthOfLL()
    {
        int len = 0;
        Node* temp = head;
        while (temp != NULL) {
            len++;
            temp = temp->next;
        }
        return len;
    }

public:
    // Way-1
    // TC: O(n) + O(n/2) => O(n)

    int middleOfLL1()
    {
        Node* temp = head;
        int size = lengthOfLL();
        int middle = size / 2 + 1;
        // int traverseTill = middle - 1; // (run loop 1 less time than the length)
        while (--middle) {
            temp = temp->next;
        }
        return temp->data;
    }

    // Way-2: TC: O(N)

    int middleOfLL2()
    {
        if (head == NULL) {
            return head->data;
        }
        Node *slow = head, *fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->data;
    }
};

int main()
{
    LLMiddle l1;
    l1.insertAtStart(10);
    l1.insertAtEnd(20);
    l1.insertAtEnd(30);
    l1.insertAtEnd(40);
    l1.insertAtEnd(50);
    l1.insertAtEnd(60);
    l1.insertAtEnd(70);
    l1.insertAtEnd(80);
    l1.showLinkedList();

    cout << "Even Size, Middle is: " << l1.middleOfLL2() << nl;

    l1.insertAtEnd(69);
    l1.insertAtEnd(19);
    l1.insertAtEnd(29);

    l1.showLinkedList();
    cout << "Odd Size, Middle is: " << l1.middleOfLL2() << nl;

    return 0;
}

/*
    @author: princebansal_
*/

#include "./LLClass.cpp"
#include <iostream>
using namespace std;
#define nl '\n'

class LLReverseInK : public LinkedList {

    // This will reverse also when n (size of linked list) is not divisble by k: those elements who doesn't form group of k also gets reversed
    Node* kReverse1(Node* head, int k)
    {
        // Base case
        if (head == NULL)
            return head;

        // Reversing K nodes
        Node* curr = head;
        Node* temp = NULL;
        Node* prev = NULL;
        int cnt = 0;
        while (curr != NULL && cnt < k) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            cnt++;
        }

        // Reversing the remaining list
        if (temp != NULL)
            head->next = kReverse1(temp, k);

        // returning new head of the list
        return prev;
    }

    // Way-2: When n is not divisible by k => remaining elements which doesn't form the group of k remains unchanged
    Node* kReverse2(Node* head, int k, int size)
    {
        int count = 0;
        Node *curr = head, *prev = NULL, *temp = NULL;
        while (count < k && curr) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            count++;
        }
        size -= k;

        if (temp && size >= k) {
            head->next = kReverse2(temp, k, size);
        } else
            head->next = temp;
        return prev;
    }

public:
    void kReverseRecursive(int k)
    {
        head = kReverse1(head, k);
    }

    void kReverseSizeUnChanged(int k)
    {
        int size = lengthOfLL();
        head = kReverse2(head, k, size);
    }
};

int main()
{
    LLReverseInK l1;
    int k;
    l1.insertAtEnd(10);
    l1.insertAtEnd(20);
    l1.insertAtStart(5);
    l1.insertAtEnd(40);
    l1.insertAtEnd(69);
    l1.insertAtEnd(3);
    l1.insertAtEnd(4);
    l1.insertAtEnd(55);
    cout << "Linked list is: " << nl;
    l1.showLinkedList();
    cout << "Size: " << l1.lengthOfLL() << nl;

    cout << "Enter K: ";
    cin >> k;
    cout << "After reverse in groups of " << k << " linked list is (K group changed): " << nl;
    l1.kReverseRecursive(k);
    l1.showLinkedList();

    cout << "After reverse in groups of " << k << " linked list is (K group UnChanged): " << nl;
    l1.kReverseSizeUnChanged(k);
    l1.showLinkedList();

    return 0;
}
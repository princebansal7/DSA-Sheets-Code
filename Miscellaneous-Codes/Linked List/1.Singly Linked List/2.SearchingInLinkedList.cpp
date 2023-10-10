#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *head) {   // TC: O(n) , SC: O(1)

    cout << "Linked List is: \n";
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int searchKey(Node *head, int key) {  // TC: O(n) , SC: O(1)

    int count = 1;

    while (head != NULL) {

        if (key == head->data) {
            return count;
        }
        count++;
        head = head->next;
    }
    return -1;
}

int searchKeyRecursive(Node *head, int key) {  // TC: O(n) , SC: O(n)

    if (head == NULL)  // base case 1
        return -1;


    if (head->data == key) { // base case 2
        return 1;
    }
    else {
        int res = searchKeyRecursive(head->next, key);
        if (res == -1)  // if element not found
            return -1;
        return res + 1;
    }
}

int main()
{

    /*
        NOTE: Linked lists doesn't allow Binary Search for sorted linked list as middle element
              can't be found in constant time, But 'skip linked list' provides faster search

    */
    int key; cin >> key;
    Node *head = new Node(10);
    head->next = new Node(69);
    head->next->next = new Node(90);
    head->next->next->next = new Node(100);

    printList(head);

    int pos = searchKey(head, key);

    if (pos != -1)
        cout << "Key is present at position " << pos << endl;
    else
        cout << "Key Not Present\n";



    cout << "Recursive search pos: " << searchKeyRecursive(head, key);

    delete head;

    return 0;
}
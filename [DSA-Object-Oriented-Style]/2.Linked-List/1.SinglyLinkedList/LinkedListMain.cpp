/*
    @author: princebansal_

*/
#include "../1.SinglyLinkedList/LinkedListClass.cpp"

//                     OR

// #include "LinkedListClass.cpp"

#include <iostream>
using namespace std;
#define nl "\n"

int main()
{
    SinglyLL list;
    list.insertAtStart(10);
    list.printList();

    list.insertAtEnd(20);
    list.printList();
    list.insertAtEnd(30);
    list.printList();
    list.insertAtEnd(40);
    list.printList();
    list.insertAtEnd(69);
    list.printList();

    list.deleteFirst();
    list.printList();

    list.deleteEnd();
    list.printList();

    list.insertAfter(30, 69);
    list.printList();

    list.deleteSpec(99);
    list.printList();

    return 0;
}
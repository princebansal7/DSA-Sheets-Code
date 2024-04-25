/*
    @author: princebansal_
*/

#include "CircularLLClass.cpp"
#include <iostream>
using namespace std;
#define nl '\n'

int main()
{
    CircularLL list;
    // list.insertBeg(10);
    // list.printCLL();
    // list.insertBeg(20);
    // list.printCLL();
    // list.insertBeg(30);
    // list.printCLL();
    // list.insertBeg(40);
    // list.printCLL();
    // list.insertBeg(50);
    // list.printCLL();

    list.insertLast(10);
    list.printCLL();
    list.insertLast(20);
    list.printCLL();
    list.insertLast(30);
    list.printCLL();
    list.insertLast(40);
    list.printCLL();
    list.insertLast(50);
    list.printCLL();

    // list.deleteFirst();
    // list.printCLL();
    // list.deleteFirst();
    // list.printCLL();
    // list.deleteFirst();
    // list.printCLL();
    // list.deleteFirst();
    // list.printCLL();
    // list.deleteFirst();
    // list.printCLL();
    // list.deleteFirst();
    // list.printCLL();

    list.deleteLast();
    list.printCLL();
    list.deleteLast();
    list.printCLL();
    list.deleteLast();
    list.printCLL();
    list.deleteLast();
    list.printCLL();
    list.deleteLast();
    list.printCLL();
    list.deleteLast();
    list.printCLL();

    // list.insertAfter(40, 69);
    // list.printCLL();

    // list.deleteSpec(50);
    // list.printCLL();

    return 0;
}
/*
    @author: princebansal_

*/
#include "DoublyLLClass.cpp"
#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int main()
{
    DoublyLL list;

    list.insertAtBeg(10);
    list.printDll();
    list.insertAtBeg(20);
    list.printDll();
    list.insertAtBeg(30);
    list.printDll();

    list.insertAtEnd(99);
    list.printDll();
    list.insertAtEnd(98);
    list.printDll();
    list.insertAtEnd(97);
    list.printDll();

    // list.deleteFirst();
    // list.printDll();
    // list.deleteFirst();
    // list.printDll();
    // list.deleteFirst();
    // list.printDll();
    // list.deleteFirst();
    // list.printDll();

    // list.deleteEnd();
    // list.printDll();
    // list.deleteEnd();
    // list.printDll();
    // list.deleteEnd();
    // list.printDll();
    // list.deleteEnd();
    // list.printDll();
    // list.deleteEnd();
    // list.printDll();
    // list.deleteEnd();
    // list.printDll();

    list.insertAfter(99, 69);
    list.printDll();

    // cout << nl << "Printing in Reverse" << nl << nl;
    // list.printReverseDll();

    list.DeleteSpec(30);
    list.printDll();
    list.DeleteSpec(20);
    list.printDll();
    list.DeleteSpec(10);
    list.printDll();
    list.DeleteSpec(99);
    list.printDll();
    list.DeleteSpec(69);
    list.printDll();
    list.DeleteSpec(97);
    list.printDll();
    list.DeleteSpec(69);
    list.printDll();

    return 0;
}
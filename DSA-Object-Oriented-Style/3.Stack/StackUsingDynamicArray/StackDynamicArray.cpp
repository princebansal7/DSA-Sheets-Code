/*
    @author: princebansal_
*/

#include "DynamicArrayClass.cpp"
#include <iostream>
using namespace std;

class Stack : private DynamicArray {
public:
    void createStack(int capacity)
    {
        createArray(capacity);
    }
    void push(int data)
    {
        append(data);
    }
    void pop()
    {
        // countElement() gives total elements in stack/array
        // => subtracting 1 from it gives index of last i.e, top element
        int top = countElement() - 1;
        deleteElement(top);
    }

    int peek()
    {
        int top = countElement() - 1; // getting top's index
        int topElement = getElement(top);
        return topElement;
    }

    bool isEmpty()
    {
        return isArrayEmpty();
    }
};

int main()
{
    Stack s1;
    s1.createStack(5);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(69);
    s1.push(99); // will Not give OVERFLOW irrespective of initial capacity

    while (s1.isEmpty() != true) {
        cout << s1.peek() << nl;
        s1.pop();
    }
    cout << "Check isEmpty: " << s1.isEmpty() << nl;

    s1.pop(); // will give UnderFlow

    return 0;
}
/*
    @author: princebansal_
*/

// STACK:
// 1. Linear Data Structure (Data st. with Restrictions)
// 2. Insertion can be done at only one end.
// 3. Can Access only last inserted element.
// => Working Principle: LIFO (Last In First Out)
// 4. Stack can be implemented using 3 ways:
//    a. Arrays
//    b. Dynamic arrays
//    c. Linked list
// 5. Stack never gives you functionality of Traversing, we always
//    have to see top element 1st then to see other, 1st need to
//    remove the top element.

//----------------------------------------------------------------

// 1. Stack using Arrays (we'll use our array class)

// - Let's do inheritance here, and make Stack class using Array class

// - If we do public inheritance, then all the public members of array
//   class will also be public to Stack class user 1 ( who creates object)
//   which we don't want.

// - So, if Inheritance is protected here, then all the public members will be
//   protected in Stack class => users who'll create object of Stack class won't
//   be able to call Array class functions (but maker of Stack class (user 2) can
//   use all the inherited functions of Array Class), but doing protected inheritance
//   enable User 2 (who will inherite Stack class) of Stack class to access Array Class
//   functions, which we also dont't want as Inherited class of Stack would be using some
//   Stack feature and not arrays.

// => We should be 'private' inheritance here,(as both public and protected members of
//    Array class will becomes private members of Stack class for user 1 of Stack class)
//    and User 2 of Stack class also won't be able to use array class features.

#include "ArrayClass.cpp"
#include <iostream>
using namespace std;

// Using Inheritance our Stack class code reduced immensly

class Stack : private Array {
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

    bool isFull()
    {
        return isArrayFull();
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
    // s1.push(99); // will give OVERFLOW

    cout << "Check isFull: " << s1.isFull() << nl;

    while (s1.isEmpty() != true) {
        cout << s1.peek() << nl;
        s1.pop();
    }
    cout << "Check isEmpty: " << s1.isEmpty() << nl;

    // s1.pop(); // will give UnderFlow

    return 0;
}
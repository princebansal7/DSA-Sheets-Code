/*
    @author: princebansal_
*/

#include "StackLLClass.cpp"
#include <iostream>

int main()
{
    Stack s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(69);
    while (!s1.isEmpty()) {
        cout << s1.peek() << nl;
        s1.pop();
    }

    return 0;
}
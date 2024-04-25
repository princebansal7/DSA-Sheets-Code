/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// ------------------------------------------------------------
// Efficeint implementation

class Dequeue {
    int front, size, capacity;
    int* array;

public:
    Dequeue()
    {
        capacity = 0;
        size = front = 0;
        array = NULL;
    }

    void createDequeue(int cap)
    {
        capacity = cap;
        size = front = 0;
        array = new int[cap];
    }

    bool isFull()
    {
        return size == capacity;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void insertRear(int val)
    {
        if (isFull())
            cout << "OVERFLOW";
        else {
            int new_rear = (front + size) % capacity;
            array[new_rear] = val;
            size++;
        }
    }

    void deleteRear()
    {
        if (isEmpty()) {
            cout << "UNDERFLOW" << nl;
        } else {
            size--;
        }
    }

    // O(1)
    void insertFront(int val)
    {
        if (isFull()) {
            cout << "OVERFLOW" << nl;
        } else {
            front = (front + capacity - 1) % capacity;
            array[front] = val;
            size++;
        }
    }

    // O(1)
    void deleteFront()
    {
        if (isEmpty())
            cout << "UNDERFLOW" << nl;
        else {
            front = (front + 1) % capacity;
            size--;
        }
    }

    int getRear()
    {
        if (isEmpty()) {
            cout << "EMPTY: ";
            return -1;
        }
        return array[(front + size - 1) % capacity];
    }

    int getFront()
    {
        if (isEmpty()) {
            cout << "EMPTY: ";
            return -1;
        }
        return array[front];
    }
};
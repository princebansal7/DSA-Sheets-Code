/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'
// There are many variations of Queue:
// 1. Dequeue (IMP)
// 2. Priority Queue (IMP): (every element have priority, one highest priority one gets deleted 1st always)
// 3. Insertion Restrcited queue (insertion happens at only one end, deletions happens on both)
// 4. Deletion Restricted queue  (deletion happens at only one end, insertuons happens on both)

// ----------Dequeue (pronounced as Deck)-------------------
// Alternative names:Head-Tail queue
// Double ended Queue
// Insertion and Deletion is Possible on Both ends

// ------------------------------------------------------------
// Simple implementation (front is always at 0, and rear is always at size-1)
// This solution isn't efficient as some operations are: O(N)

class Dequeue {
    int size, capacity;
    int* array;

public:
    Dequeue()
    {
        capacity = 0;
        size = 0;
        array = NULL;
    }

    void createDequeue(int cap)
    {
        capacity = cap;
        size = 0;
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
            array[size] = val;
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

    // O(N)
    void insertFront(int val)
    {
        if (isFull()) {
            cout << "OVERFLOW" << nl;
        } else {
            for (int i = size - 1; i >= 0; i--) {
                array[i + 1] = array[i];
            }
            array[0] = val;
            size++;
        }
    }

    // O(N)
    void deleteFront()
    {
        if (isEmpty())
            cout << "UNDERFLOW" << nl;
        else {
            for (int i = 0; i < size - 1; i++) {
                array[i] = array[i + 1];
            }
            size--;
        }
    }

    int getRear()
    {
        if (isEmpty()) {
            cout << "EMPTY: ";
            return -1;
        }
        return array[size - 1];
    }

    int getFront()
    {
        if (isEmpty()) {
            cout << "EMPTY: ";
            return -1;
        }
        return array[0];
    }

    ~Dequeue()
    {
        delete[] array;
    }
};
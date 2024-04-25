/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Queue {
private:
    int capacity, front, size;
    int* array;

public:
    Queue()
    {
        capacity = 0;
        front = 0;
        array = NULL;
        size = 0;
    }

    void createQueue(int cap)
    {
        capacity = cap;
        front = 0;
        array = new int[cap];
    }

    void enQueue(int data) // insertion in Queue also called enqueue
    {
        if (array == NULL) {
            cout << "Queue doesn't exit yet: Invalid Operation" << nl;
        } else if (isFull()) {
            cout << "OVERFLOW" << nl;
        } else {
            int rear = (front + size - 1) % capacity;
            rear = (rear + 1) % capacity;
            array[rear] = data;
            size++;
        }
    }

    void deQueue() // deletion in queue happens at front
    {
        if (isEmpty()) {
            cout << "UNDERFLOW" << nl;
        } else {
            front = (front + 1) % capacity;
            size--;
        }
    }

    int getFront()
    {
        if (isEmpty()) {
            cout << "Empty Queue ";
            return -1;
        }
        return array[front];
    }

    int getRear()
    {
        if (isEmpty()) {
            cout << "Empty Queue ";
            return -1;
        }
        return array[(front + size - 1) % capacity];
    }

    bool isEmpty()
    {
        if (size == 0)
            return true;
        return false;
    }

    bool isFull()
    {
        if (size == capacity)
            return true;
        return false;
    }

    int getSize()
    {
        return size;
    }

    ~Queue()
    {
        delete[] array;
    }
};
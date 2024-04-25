#include "DequeueCircularClass.cpp"

int main()
{
    Dequeue q;
    q.createDequeue(5);
    cout << "front: " << q.getFront() << " rear: " << q.getRear() << nl;
    q.insertRear(10);
    cout << "front: " << q.getFront() << " rear: " << q.getRear() << nl;
    q.insertFront(20);
    cout << "front: " << q.getFront() << " rear: " << q.getRear() << nl;
    q.insertRear(30);
    cout << "front: " << q.getFront() << " rear: " << q.getRear() << nl;
    q.insertFront(40);
    cout << "front: " << q.getFront() << " rear: " << q.getRear() << nl;
    q.insertFront(50);
    cout << "front: " << q.getFront() << " rear: " << q.getRear() << nl;
    q.insertFront(60);
    cout << "front: " << q.getFront() << " rear: " << q.getRear() << nl;
    q.insertFront(69);
    cout << "front: " << q.getFront() << " rear: " << q.getRear() << nl;
    q.deleteRear();
    cout << "front: " << q.getFront() << " rear: " << q.getRear() << nl;
    q.deleteFront();
    cout << "front: " << q.getFront() << " rear: " << q.getRear() << nl;
    return 0;
}
#include "QueueCircularClass.cpp"

int main()
{
    Queue q;

    q.enQueue(10);

    q.createQueue(5);

    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50);

    cout << nl;
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.deQueue();
    q.enQueue(7777);
    // q.enQueue(101);

    cout << nl << "checking isFull: " << q.isFull() << nl;
    cout << nl << "checking isEmpty: " << q.isEmpty() << nl << nl;

    while (!q.isEmpty()) {
        cout << "size: " << q.getSize() << nl;
        cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
        q.deQueue();
    }

    cout << "size: " << q.getSize() << nl;
    cout << q.getRear() << " " << q.getFront() << nl;
}
#include "QueueClass.cpp"

int main()
{
    Queue q;
    q.createQueue(10);

    q.enQueue(10);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.enQueue(20);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.enQueue(30);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.enQueue(40);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.enQueue(50);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.enQueue(60);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.enQueue(70);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.enQueue(80);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.enQueue(90);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.enQueue(100);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.deQueue();
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.enQueue(111);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.deQueue();
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.enQueue(222);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.deQueue();
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.enQueue(333);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;

    cout << nl << "checking isFull: " << q.isQueueFull() << nl;
    cout << nl << "checking isEmpty: " << q.isQueueEmpty() << nl << nl;

    while (!q.isQueueEmpty()) {
        cout << "size: " << q.getSize() << nl;
        cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
        q.deQueue();
    }

    cout << "size: " << q.getSize() << nl;
    cout << q.getRear() << " " << q.getFront() << nl;
}
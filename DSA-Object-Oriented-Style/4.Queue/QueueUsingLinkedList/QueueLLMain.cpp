/*
    @author: princebansal_
*/

#include "QueueLLClass.cpp"

int main()
{

    Queue q;

    // cout << q.getFront() << nl;

    q.enQueue(10);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.enQueue(20);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.enQueue(30);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.deQueue();
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.enQueue(69);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    // q.deQueue();
    // q.deQueue();
    // q.deQueue();
    // // q.deQueue();

    while (!q.isEmpty()) {
        cout << "size: " << q.getSize() << nl;
        cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
        q.deQueue();
    }

    cout << "size: " << q.getSize() << nl;
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;

    return 0;
}
#include "DequeueLLClass.cpp"

int main()
{
    DequeueLL q;

    q.push_back(10);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.push_front(20);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.push_back(30);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;

    q.push_back(77);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.push_back(78);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.push_back(79);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    q.push_back(80);
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;

    cout << "isEmpty(): " << q.isEmpty() << nl;
    while (!q.isEmpty()) {
        cout << "size: " << q.getSize() << nl;
        cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
        q.pop_back();
        // q.pop_front();
    }

    cout << "isEmpty(): " << q.isEmpty() << nl;
    cout << "rear: " << q.getRear() << " front: " << q.getFront() << nl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair

struct Stack
{
  int *arr, top, cap;
  Stack(int c)
  {
    cap = c;
    arr = new int[cap];
    top = -1;
  }

  void push(int x) {
    if (top == cap - 1) {
      cout << "OverFlow\n";
      return;
    }
    top++;
    arr[top] = x;
  }

  void pop() {
    if (top == -1) {
      cout << "UnderFlow\n";
      return;
    }
    top--;
  }

  int peek() {
    if (top == -1) {
      cout << "UnderFlow\n";
      return INT_MIN;
    }
    return arr[top];
  }

  bool isEmpty() {
    if (top == -1)
      return true;
    else
      return false;
  }

  int size() {
    return top + 1;
  }
};

int main()
{
  fast_io;
  int capacity; cin >> capacity;

  Stack s(capacity);

  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(60);
  cout << "Stack Size: " << s.size() << endl;
  cout << "Elements in stack are:\n";
  cout << s.peek() << endl;
  s.pop();
  cout << s.peek() << endl;
  s.pop();
  cout << s.peek() << endl;
  s.pop();
  cout << s.peek() << endl;
  s.pop();
  cout << s.peek() << endl;
  s.pop();
  s.pop();
  s.pop();
  cout << "Stack: Empty(1) , Otherwhise(0):\n" << s.isEmpty() << endl;
  cout << "Size:" << s.size() << endl;
  return 0;
}
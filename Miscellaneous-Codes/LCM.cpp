#include<iostream>
using namespace std;

// Finding LCM of two numbers
inline int getLCM(int, int);

int getLCM(int a, int b) {
  int max = a > b ? a : b;
  int lcm;
  for (int i = max; i <= a * b; i = i + max)
  {
    if (i % a == 0 and i % b == 0) {
      lcm = i;
      break;
    }
  }
  return lcm;
}

int main()
{
  int n1, n2; cin >> n1 >> n2;
  cout << "LCM of " << n1 << " and " << n2 << " is " << getLCM(n1, n2);
  return 0;
}
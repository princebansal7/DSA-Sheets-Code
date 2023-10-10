#include<iostream>
using namespace std;

// Finding HCF of two numbers
inline int getHCF(int, int);

int getHCF(int a, int b) {
  int min = a < b ? a : b;
  int hcf;
  for (int i = min; i >= 1; i--)
  {
    if (a % i == 0 and b % i == 0) {
      hcf = i;
      break;
    }
  }
  return hcf;
}

int main()
{
  int n1, n2; cin >> n1 >> n2;
  cout << "HCF of " << n1 << " and " << n2 << " is: " << getHCF(n1, n2);
  return 0;
}
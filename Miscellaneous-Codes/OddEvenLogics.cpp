#include<iostream>
using namespace std;

void usingBITWISE(int n) {
  if (n & 1)
    cout << "Odd Number\n";
  else
    cout << "Even Number\n";

}

void usingMODULO(int n) {
  if (n % 2 == 1)
    cout << "Odd Number\n";
  else
    cout << "Even Number\n";
}
void usingProgrammingLOGIC(int n) {
  if ((n / 2) * 2 == n)
    cout << "Even Number\n";
  else
    cout << "Odd Number\n";
}


int main()
{
  int a; cin >> a;
  usingBITWISE(a);
  usingMODULO(a);
  usingProgrammingLOGIC(a);

  return 0;
}
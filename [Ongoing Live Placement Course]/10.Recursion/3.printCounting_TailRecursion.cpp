#include <iostream>
using namespace std;
#define nl "\n"

void printCounting(int val)
{
    if (val == 0)
        return;
    cout << val << nl;      // 1st: processing
    printCounting(val - 1); // 2nd: Recusive call => Tail Recursion
}

int main()
{
    int n;
    cin >> n;

    printCounting(n);

    return 0;
}
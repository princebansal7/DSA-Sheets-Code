#include <iostream>
using namespace std;
#define nl "\n"

void printCounting(int val)
{
    if (val == 0)
        return;

    printCounting(val - 1); // 1st: Recusive call
    cout << val << nl;      // 2nd: processing => Head Recursion
}

int main()
{
    int n;
    cin >> n;
    printCounting(n);
    return 0;
}
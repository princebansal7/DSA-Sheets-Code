/*
    @author: princebansal_
*/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define nl '\n'

// TC: O(n)
void printDivisor1(int n)
{
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            cout << i << " ";
    }
    cout << nl;
}

// TC: O(sqrt(n))
void printDivisor2(int n)
{
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            if ((n / i) != i)
                cout << n / i << " ";
        }
    }
    cout << nl;
}

// TC: O(sqrt(n)) + O((no of factors)log(no of factors of n)) + O(no of factors)
void printDivisor3(int n)
{
    vector<int> divisors;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if ((n / i) != i)
                divisors.push_back(n / i);
        }
    }
    sort(divisors.begin(), divisors.end());
    for (int val : divisors)
        cout << val << " ";
    cout << nl;
}
int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;

    // printDivisor1(n);
    // printDivisor2(n);
    printDivisor3(n);

    return 0;
}
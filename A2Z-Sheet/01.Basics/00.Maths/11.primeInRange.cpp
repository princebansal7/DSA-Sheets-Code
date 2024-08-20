/*
    @author: princebansal_
*/

#include <iostream>
#include <vector>
using namespace std;
#define nl '\n'

void seive(int n)
{
    vector<bool> prime(n + 1, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i] == 1) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = 0;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (prime[i] == 1) {
            cout << i << " ";
        }
    }
    cout << nl;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    // primeTillN1(n);
    seive(n);
    return 0;
}
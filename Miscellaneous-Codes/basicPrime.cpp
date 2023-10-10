#include <iostream>
using namespace std;

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("debug.txt", "w", stderr);
    // #endif
    long long n;
    cin >> n;
    long long iterations = 0;
    long long i = 2;
    bool flag = false;
    while (i * i < n) { // while (i < n)
        iterations++;
        if (n % i == 0) {
            flag = true;
            break;
        }
        i++;
    }

    // 87178291199 PRIME [took much time to compute on both O(n) and o(root(n))]

    if (flag == true)
        cout << "Not Prime" << endl;
    else
        cout << "Prime" << endl;
    cout << "Number of iterations: " << iterations;
    return 0;
}
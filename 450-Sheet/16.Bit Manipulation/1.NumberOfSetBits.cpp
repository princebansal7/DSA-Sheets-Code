#include <bits/stdc++.h>
using namespace std;

#define set_bits __builtin_popcountll

int main()
{
    int n;
    cin >> n;

    //___WAY-1 [ Using Inbuilt function __builtin_popcountll() ]

    cout << "[WAY-1] No. of SetBits: " << set_bits(n) << endl;

    //__WAY-2 [Works only for Non -ve numbers]_________________________

    int count = 0;

    while (n > 0) {
        int bit = n & 1;
        if (bit == 1)
            count++;
        n = n >> 1;
    }
    cout << "[WAY-2] No. of SetBits: " << count << endl;

    return 0;
}
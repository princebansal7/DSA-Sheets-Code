/*
    @author: princebansal_
*/

#include <algorithm>
#include <iostream>
using namespace std;
#define nl '\n'

// given rope with length n, cut the rope in maximum number of pieces such that
// every problem has length either a, b or c. else -1
// eg: INPUT: n=5, a=2, b=5, c=1
//     OUTPUT: 5
//     (maximum pieces we can cut with allowed length is 5 where each piece is of length c i.e, 1)
// corner case: n=9, a=2, b=2, c=2

// TC: depends on n,a,b,c
// O(3^n), better solution is using DP

int maxRopePieces(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    int ans = max({ maxRopePieces(n - a, a, b, c), maxRopePieces(n - b, a, b, c), maxRopePieces(n - c, a, b, c) });

    if (ans == -1) // for handling corner cases
        return -1;
    return ans + 1;
}

int main()
{
    int length;
    cin >> length;
    int a, b, c; // allowed lengths
    cin >> a >> b >> c;

    cout << maxRopePieces(length, a, b, c) << nl;

    return 0;
}
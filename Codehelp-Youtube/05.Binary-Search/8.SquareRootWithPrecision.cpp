#include<bits/stdc++.h>
using namespace std;

int floorSqrt(int n) {

    int ans = 0;
    int s = 0, e = n;

    while (s <= e) {
        long long mid = s + (e - s) / 2;
        long long sq = mid * mid;
        if (sq > n) {
            e = mid - 1;
        }
        else {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}

double PrecisionSquareRoot(int x, int intSquare, int places) {

    double val = 1;
    double ans = intSquare;
    for (int i = 1; i <= places; i++) {
        val = val / 10;
        for (double j = ans; j * j < x; j = j + val) {
            ans = j;
        }
    }
    return ans;
}

int main()
{

#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif

    int n; cin >> n;         // Enter Number whose Square root you want
    int places; cin >> places; // enter decimal places, upto you want square root

    int intSquare = floorSqrt(n); // calculates floor square root

    cout << "Floor_Sqrt(" << n << ") is: " << intSquare << endl;

    double precSqRoot = PrecisionSquareRoot(n, intSquare, places); // calulates final decimal squareroot

    cout << "Sqrt(" << n << ") is: " << precSqRoot;

    return 0;
}
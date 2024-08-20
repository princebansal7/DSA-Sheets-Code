#include <bits/stdc++.h>
using namespace std;

/*___________________WAY-1_____________________

int floorSqrt(int x) {

    if (x == 0 || x == 1)
        return x;


    int i = 1;
    while (i * i <= x) {
        i++;
    }
    return i - 1;
}

_________________________________________________*/

//______Using Binary Search_______________________

int floorSqrt(int x)
{

    if (x == 0)
        return x;

    int ans = -1;
    long long start = 1;
    long long end = x;
    while (start <= end) {

        long long mid = start + (end - start) / 2;
        long long Sqt = mid * mid;

        if (Sqt == x)
            return mid;
        if (Sqt > x) {
            end = mid - 1;
        } else {
            start = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << floorSqrt(n) << endl;
    return 0;
}

/*___________For Large Constrains__________________

#include<bits/stdc++.h>
using namespace std;

long long int floorSqrt(long long int x) {

    if (x == 0)
        return x;

    long long int ans;
    long long int start = 1;
    long long int end = x;

    while (start <= end) {

        long long int mid = start + (end - start) / 2;

//      long long int Sqt = mid * mid;

        if (mid == x / mid)
            return (int)mid;
        if (mid > x / mid) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
            ans = mid;
        }
    }
    return (int)ans;
}

_____________________________________________________*/

int main()
{
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        cout << floorSqrt(n) << "\n";
    }

    return 0;
}

// I/P:

//     5
//     1000000000
//     9999999991
//     7777777772
//     7653333333
//     5555555553

//     O/P:

//     31622
//     99999
//     88191
//     87483
//     74535

//     Constraints:

//     1 <= T <= 5
//     0 <= N <= 10 ^ 16

//     Time Limit: 1 sec.

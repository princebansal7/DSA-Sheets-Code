#include <iostream>
#include <numeric>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];

int SumofArray1(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int SumofArray2(int arr[], int n)
{
    int initialSum = 0;

    return accumulate(arr, arr + n, initialSum);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans;

    // ans = SumofArray1(arr, n);

    ans = SumofArray2(arr, n);

    cout << "Sum: " << ans << nl;

    return 0;
}
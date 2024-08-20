#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long
int arr[100];

int Sum(int arr[], int size)
{
    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];

    return arr[0] + Sum(arr + 1, size - 1);
}

int main()
{
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int ans = Sum(arr, size);
    cout << "Sum of Array: " << ans << nl;
    return 0;
}
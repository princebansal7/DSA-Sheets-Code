/*
    @author: princebansal_

*/

#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long
int arr[100];

// NOTE: The pick point for this problem is that we can get the maximum product from the product of two negative numbers too.

// WAY-1: Brute Force TC: O(n^3), SC: O(1)-----------------------------------

void maxProductSubArray1(int arr[], int n)
{
    int ans = INT_MIN;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int product = 1;
            for (int k = i; k <= j; k++) {
                product *= arr[k];
            }
            ans = max(product, ans);
        }
    }
    cout << "Maximum product is: " << ans << nl;
}

// WAY-2: Optimised Brute Force TC : O(n^2), SC : O(1)------------------

void maxProductSubArray2(int arr[], int n)
{
    int ans = arr[0];
    for (int i = 0; i < n - 1; i++) {
        int product = arr[i];
        for (int j = i + 1; j < n; j++) {
            ans = max(product, ans);
            product *= arr[j];
        }
        ans = max(product, ans);
    }
    cout << "Maximum product is: " << ans << nl;
}

// WAY-3:  Optimised  TC : O(n)+O(n), SC : O(1)------------------

void maxProductSubArray3(int arr[], int n)
{
    // finding  maxProduct from both left and right side, keeping case where value can be 0 in mind

    int leftMaxProd = arr[0];
    int rightMaxProd = arr[0];

    int product = 1;
    bool isZero = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            product = 1;
            isZero = true;
            continue;
        }
        rightMaxProd = max(rightMaxProd, product);
    }

    product = 1;

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            product = 1;
            isZero = true;
            continue;
        }
        leftMaxProd = max(leftMaxProd, product);
    }

    int ans;
    if (isZero) {
        ans = max(max(leftMaxProd, rightMaxProd), 0);
    } else {
        ans = max(leftMaxProd, rightMaxProd);
    }
    cout << "Maximum product is: " << ans << nl;
}

// WAY-4: Kadane's algo TC : O(n), SC : O(1)------------------

void maxProductSubArray4(int arr[], int n)
{
    int product1 = arr[0], product2 = arr[0], ans = arr[0];

    for (int i = 1; i < n; i++) {
        int temp = max({ arr[i], product1 * arr[i], product2 * arr[i] }); // max(), min() with 3 args ? use algorithm header file
        product2 = min({ arr[i], product1 * arr[i], product2 * arr[i] });
        product1 = temp;

        ans = max(ans, product1);
    }

    cout << "Maximum product is: " << ans << nl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // maxProductSubArray1(arr, n);

    // maxProductSubArray2(arr, n);

    // maxProductSubArray3(arr, n);

    maxProductSubArray4(arr, n);

    return 0;
}
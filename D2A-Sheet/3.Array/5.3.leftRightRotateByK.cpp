/*
    @author: princebansal_
    Sheet: https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/
*/

#include <iostream>
#include <vector>
using namespace std;
#define nl '\n'

void printArr(vector<int>& arr, int n)
{
    cout << "Array is: " << nl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << nl;
}

//--------------------------------------------------------------------------

void leftRotate(vector<int>& v, int n)
{
    int firstVal = v[0];
    for (int i = 0; i < n - 1; i++) {
        v[i] = v[i + 1];
    }
    v[n - 1] = firstVal;
}

void rightRotate(vector<int>& v, int n)
{
    int lastVal = v[n - 1];
    for (int i = n - 1; i > 0; i--) {
        v[i] = v[i - 1];
    }
    v[0] = lastVal;
}
void leftRightRotateByK1(vector<int> v, int n, char choice, int k)
{
    if (choice == 'L' || choice == 'l') {
        for (int i = 1; i <= k; i++)
            leftRotate(v, n);
        printArr(v, n);
    } else if (choice == 'R' || choice == 'r') {
        for (int i = 1; i <= k; i++)
            rightRotate(v, n);
        printArr(v, n);
    } else {
        cout << "Invalid choice!" << nl;
    }
}

//---------Reversal algo-------------------------------------------------------

void reverseArr(vector<int>& v, int start, int end)
{
    while (start < end)
        swap(v[start++], v[end--]);
}

void leftRightRotateByK2(vector<int> v, int n, char choice, int k)
{
    if (k > n)
        k %= n;
    if (choice == 'L' || choice == 'l') {
        reverseArr(v, 0, k - 1); // reversing first k elements
        reverseArr(v, k, n - 1); // reversing remaining elements (n-k elements)
        reverseArr(v, 0, n - 1); // reversing whole array
        printArr(v, n);
    } else if (choice == 'R' || choice == 'r') {
        reverseArr(v, 0, n - k - 1); // reversing first n-k elements
        reverseArr(v, n - k, n - 1); // reversing remaining elements (k elements)
        reverseArr(v, 0, n - 1); // reversing whole array
        printArr(v, n);
    } else {
        cout << "Invalid choice!" << nl;
    }
}
int main()
{
    vector<int> v { 1, 2, 3, 4, 5 }; // given array will be sorted (non-decreasing)
    int n = v.size();
    char ch;
    int k;
    cout << "OG array is: " << nl;
    printArr(v, n);
    cout << "Enter K, number of times you want to rotate array: ";
    cin >> k;
    cout << "To rotate Right by " << k << " places, press R:" << nl;
    cout << "To rotate Left by " << k << " places, press L:" << nl;
    cin >> ch;

    // leftRightRotateByK1(v, n, ch, k);
    leftRightRotateByK2(v, n, ch, k);

    return 0;
}
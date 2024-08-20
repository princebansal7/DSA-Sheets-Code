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

void leftRightRotate(vector<int> v, int n, char choice)
{
    if (choice == 'L' || choice == 'l') {
        int firstVal = v[0];
        for (int i = 0; i < n - 1; i++) {
            v[i] = v[i + 1];
        }
        v[n - 1] = firstVal;
        printArr(v, n);
    } else if (choice == 'R' || choice == 'r') {
        int lastVal = v[n - 1];
        for (int i = n - 1; i > 0; i--) {
            v[i] = v[i - 1];
        }
        v[0] = lastVal;
        printArr(v, n);
    } else {
        cout << "Invalid choice!" << nl;
    }
}

int main()
{
    vector<int> v { 1, 2, 3, 4, 5 };
    int n = v.size();
    char ch;
    cout << "OG array is: " << nl;
    printArr(v, n);
    cout << "To rotate Right by 1, press R:" << nl;
    cout << "To rotate Left by 1, press L:" << nl;
    cin >> ch;
    leftRightRotate(v, n, ch);

    return 0;
}
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

void bruteForceApproach(vector<int>& v, int n)
{
    vector<int> temp(n);
    for (int i = 1; i < n; i++) {
        temp[i - 1] = v[i];
    }
    temp[n - 1] = v[0];
    printArr(temp, n);
}

void optimalApproach(vector<int> v, int n)
{
    int firstVal = v[0];
    for (int i = 0; i < n - 1; i++) {
        v[i] = v[i + 1];
    }
    v[n - 1] = firstVal;
    printArr(v, n);
}

int main()
{
    vector<int> v { 1, 2, 3, 4, 5 };
    int n = v.size();

    // bruteForceApproach(v, n);
    optimalApproach(v, n);

    return 0;
}
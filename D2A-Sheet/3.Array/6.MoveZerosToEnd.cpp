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

//----------------------------------------------------------------------

void bruteForceApproach1(vector<int>& v, int n)
{
    vector<int> temp;
    int index = 0;
    for (int i = 0; i < n; i++)
        if (v[i] != 0)
            temp.push_back(v[i]);

    int nonZeroSize = temp.size();
    for (int i = 0; i < nonZeroSize; i++)
        v[i] = temp[i];

    for (int i = nonZeroSize; i < n; i++)
        v[i] = 0;
    printArr(v, n);
}

void bruteForceApproach2(vector<int>& v, int n)
{
    vector<int> temp(n); // default value 0
    int index = 0;
    for (int i = 0; i < n; i++)
        if (v[i] != 0)
            temp[index++] = v[i];
    v = temp;
    printArr(v, n);
}

void optimalApproach(vector<int> v, int n)
{
}

int main()
{
    vector<int> v { 0, 0, 2, 3, 0, 4, 0, 1 };
    int n = v.size();

    bruteForceApproach1(v, n);
    // bruteForceApproach2(v, n);
    // optimalApproach(v, n);

    return 0;
}
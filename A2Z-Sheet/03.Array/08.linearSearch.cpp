/*
    @author: princebansal_
    Sheet: https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/
*/

#include <iostream>
#include <vector>
using namespace std;
#define nl '\n'

int linearSearch(vector<int>& v, int n, int val)
{
    for (int i = 0; i < n; i++) {
        if (v[i] == val)
            return i;
    }
    return -1;
}

int main()
{
    vector<int> v { 69, 0, 2, 3, 0, 3, 4, 0, 1 };
    int n = v.size();
    int val;
    cout << "Enter value you want to search: ";
    cin >> val;
    int index = linearSearch(v, n, val);
    if (index != -1)
        cout << "Element is present at index " << index << " i.e, at position " << index + 1 << nl;
    else
        cout << "Element not present" << nl;

    return 0;
}
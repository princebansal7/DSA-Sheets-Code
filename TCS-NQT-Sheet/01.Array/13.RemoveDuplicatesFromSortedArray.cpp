/*
    @author: princebansal_

*/

#include <iostream>
#include <set>
using namespace std;
#define nl "\n"
#define ll long long
int arr[100];

//-----Using Extra space----------------------

void removeDuplicates1(int* arr, int n)
{
    set<int> st;
    for (int i = 0; i < n; i++) // O(NlogN)
    {
        st.insert(arr[i]);
    }
    for (int val : st)
        cout << val << " ";
    cout << nl;
}

//----Modifying Array using Hash Set TC: O(n*log(n))+O(n) , SC: O(N)----

int removeDuplicates2(int* arr, int n)
{
    set<int> st;
    for (int i = 0; i < n; i++) { // O(NlogN)
        st.insert(arr[i]);
    }
    int newSize = st.size(); // Getting new size

    // Modifying Array

    int index = 0;
    for (int val : st)
        arr[index++] = val;

    return newSize;
}

//---Using Two Pointers (Approach for Sorted array)--TC:O(N), SC:O(1)---------

int removeDuplicates3(int* arr, int n)
{
    int newSizeIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[newSizeIndex] != arr[i]) {
            newSizeIndex++;
            arr[newSizeIndex] = arr[i];
        }
    }
    return newSizeIndex + 1;
}

int main()
{
    int n;
    cin >> n;

    // Enter Sorted Array

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // removeDuplicates1(arr, n);

    // int size = removeDuplicates2(arr, n); // will give us the size of new modified array
    // for (int i = 0; i < size; i++)
    //     cout << arr[i] << " ";
    // cout << nl;

    int size = removeDuplicates3(arr, n);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << nl;
    return 0;
}
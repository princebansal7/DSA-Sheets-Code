/*
    @author: princebansal_

*/

#include <iostream>
#include <climits>
#include <utility>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];

/*---------INSERTION SORT (Inplace and Stable sorting algorithm)-----------------------

    1.Idea is, we maintain we parts,
       a. Sorted Part
       b. Unsorted Part

     We 'insert' the current element to sorted part at it's "correct position" and make the
     sorted part bigger in each pass.

    2.1st element is single in sorted part initially => we directly starts from the 2nd element

    3.Best and Most Efficient when Array size is Small (TimSort and IntroSort)
    4.TC: theta(N^2) for Worst Case (When given array is reverse sorted, because maximum shifting happens)
    5.TC: theta(N) for Best Case (When given array is already Sorted)
    6.In General- TC: O(N^2)
    7. Adbaptable and Stable algo
*/

//-------TC:O(N^2), SC:O(1)----------------------------------------------

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i]; // storing the element so that, after left shifting we can put it in it's correct position
        int j = i - 1;
        while (j >= 0 && arr[j] > key) // if arr[j]>=key => now algo won't be stable
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << nl;

    return 0;
}
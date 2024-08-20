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

/*---------SELECTION SORT (Inplace and Unstable sorting algorithm)-----------------------

    1.Idea is, find out the minimum element and put at the 1st position, 2nd min at 2nd pos and
      repeat the process till end => order of elements can be changed=> Unstable sorting algo

    2.Does less memory writes compare to all other sorting algorithms
    3.But not an Optimal algo in term of memory writes, Cycle sort is more optimal in term of memory writes
    4.TC: O(N^2) for all cases
    5.Base fot Heap Sort
    6. Non Adaptive and Unstable sorting algo

*/

//-------WAY-1 (Using Extra space) TC:O(N^2), SC:O(N)---------------------------------------------------

/*     TC: (n-1)+(n-2)+(n-3)+....+2+1 = (n*(n-1))/2 => theta(N^2)
            becuase, for all cases it runs N^2 times

       NOTE: below algo is not optimised as it not inplace,
            =>  will take O(N) extra space
*/

void selectionSort1(int arr[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        int minIndex = 0;
        for (int j = 1; j < n; j++) // getting the min element index
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        temp[i] = arr[minIndex]; // putting the min element in new array (from start)
        arr[minIndex] = INT_MAX; // assigning Infinite value to min value block, so that will not again consider this block
    }

    // Copying Modified array to original array

    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}

//---------WAY-2 (InPlace Implementation) TC:O(N^2), SC:O(1))------------------------

void selectionSort2(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // i < n-1  because ,in last pass no need to swap last element with itself
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) // getting the min element index
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // selectionSort1(arr, n);

    selectionSort2(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << nl;

    return 0;
}
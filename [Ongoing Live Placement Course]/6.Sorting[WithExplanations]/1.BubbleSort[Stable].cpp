/*
    @author: princebansal_
    Types of Sorting algo [GFG]: https://www.geeksforgeeks.org/classification-of-sorting-algorithms/
*/

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];

/*---------BUBBLE SORT (Inplace and Stable sorting algorithm)-----------------------

    1.Swaps adjacent elements only if a[i]>a[i+1] => keeps the order same as
      original array => Stable sorting algo

    2.After each pass, largest element bubbled up to the top that's why called Bubble sort !!
    3.Adaptive and Stable sorting algo
*/

//-------WAY-1---------------------------------------------------
/*
       TC: (n-1)+(n-2)+(n-3)+....+2+1 = (n*(n-1))/2 => O(n^2)
       NOTE: below algo is not optimised for the case if Given array is Sorted
            =>  will still take O(N^2)
*/

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // for n elements only n-1 passes required
    {
        for (int j = 0; j < n - i - 1; j++) // j < n-1 (takes extra iterations)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

//----WAY-2 (Modified Bubble Sort)------------------------------------
/*
    Here, we maintain a variable in each pass, if given array is sorted or became sorted
    midway, if simply stops the loop and enhances performance.
    => if Given Array sorted => TC: O(n)
        otherwise            => TC: O(n^2)
*/
void modifiedBubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if (isSwapped == false)
            break;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // bubbleSort(arr, n);

    modifiedBubbleSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << nl;

    return 0;
}
/*
    @author: princebansal_

*/

#include <iostream>
#include <algorithm>
using namespace std;
#define nl "\n"
#define ll long long

int a[100], b[100];

//--------WAY-1  TC: O((n+m)log(m+n)), SC: O(m+n)---------------------

void mergeSortedArrays1(int arr[], int brr[], int n, int m)
{
    int temp[n + m];
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        temp[n + i] = brr[i];
    }
    sort(temp, temp + (n + m));

    // Printing

    for (int i = 0; i < (n + m); i++)
        cout << temp[i] << " ";
    cout << nl;
}

//-----------WAY-2 (EFFICIENT) TC: O(N+M), SC: O(N+M)-----------------------

void mergeSortedArrays2(int arr[], int brr[], int n, int m)
{
    int temp[n + m]; // Using this temp Array is Optional, We Can directly Print the corresponding values too
    int i = 0, j = 0;
    int index = 0;
    while (i < n and j < m)
    {
        if (arr[i] <= brr[j]) // (arr[i] <= brr[j]) esures stability
            temp[index++] = arr[i++];
        else
            temp[index++] = brr[j++];
    }
    while (i < n)
    {
        temp[index++] = arr[i++];
    }
    while (j < m)
    {
        temp[index++] = brr[j++];
    }

    // Printing

    for (int i = 0; i < index; i++)
        cout << temp[i] << " ";
    cout << nl;
}

//---------Directly Printing TC: O(N+M), SC: O(1)--------------------------

void mergeSortedArrays3(int arr[], int brr[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n and j < m)
    {
        if (arr[i] <= brr[j]) // (arr[i] <= brr[j]) esures stability
        {
            cout << arr[i] << " ";
            i++;
        }
        else
        {
            cout << brr[j] << " ";
            j++;
        }
    }
    while (i < n)
    {
        cout << arr[i] << " ";
        i++;
    }
    while (j < m)
    {
        cout << brr[j] << " ";
        j++;
    }
    cout << nl;
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    // mergeSortedArrays1(a, b, n, m);

    // mergeSortedArrays2(a, b, n, m);

    mergeSortedArrays3(a, b, n, m);

    return 0;
}
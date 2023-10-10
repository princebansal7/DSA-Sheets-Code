/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Sorting {

private:
    static void mergeSubArray(int arr[], int low, int mid, int high)
    {
        int size1 = mid - low + 1, size2 = high - mid;
        int left[size1]; // for left sorted subarray
        int right[size2]; // for right sorted subarray

        for (int i = 0; i < size1; i++) // putting values in auxillary left subarray
            left[i] = arr[low + i];

        for (int i = 0; i < size2; i++) // putting values in auxillary right subarray
            right[i] = arr[mid + i + 1];

        int i = 0, j = 0;
        int index = low; // beacause making changes in the same array

        while (i < size1 and j < size2) {
            if (left[i] <= right[j])
                arr[index++] = left[i++]; // putting values back into original array
            else
                arr[index++] = right[j++];
        }
        while (i < size1) {
            arr[index++] = left[i++];
        }
        while (j < size2) {
            arr[index++] = right[j++];
        }
    }

    static int hoarePartition(int arr[], int low, int high)
    {
        int i = low - 1, j = high + 1;
        int pivot = arr[low]; // pivot is always the 1st element or OR can use random(low,right) to generate randomly then swap with first element

        while (true) {
            do {
                i++;
            } while (arr[i] < pivot);

            do {
                j--;
            } while (arr[j] > pivot);

            if (i >= j)
                return j;

            swap(arr[i], arr[j]);
        }
    }

public:
    static void BubbleSort(int arr[], int n)
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

    static void ModifiedBubbleSort(int arr[], int n)
    {
        for (int i = 0; i < n - 1; i++) // for n elements only n-1 passes required
        {
            bool isSwapped = false;
            for (int j = 0; j < n - i - 1; j++) // j < n-1 (takes extra iterations)
            {
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
            if (isSwapped == false)
                break;
        }
    }

    static void selectionSort(int arr[], int n)
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

    static void insertionSort(int arr[], int n)
    {
        for (int i = 1; i < n; i++) {
            int key = arr[i]; // storing the element so that, after left shifting we can put it in it's correct position
            int j = i - 1;
            while (j >= 0 && arr[j] > key) // if arr[j]>=key => Then algo won't be stable
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    static void mergeSort(int a[], int left, int right)
    {
        if (right > left) // => having atleast two elements
        {
            int mid = left + (right - left) / 2;
            mergeSort(a, left, mid);
            mergeSort(a, mid + 1, right);
            mergeSubArray(a, left, mid, right);
        }
    }

    static void quickSort(int arr[], int low, int high)
    {

        if (low < high) {
            int pivotIndex = hoarePartition(arr, low, high);
            quickSort(arr, low, pivotIndex); // we go till pivotIndex and not pivotIndex-1 like lomuto
            quickSort(arr, pivotIndex + 1, high);
        }
    }
};

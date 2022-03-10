#include<bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(int arr[], int n) {

	/*____________WAY-1___ Brute Force O(n)__________________________
	        int n=arr.size();
	        for(int i=1;i<n;i++){
	            if(arr[i]>arr[i-1]  and arr[i]>arr[i+1])
	                return i;
	        }
	        return 0; // never reaches here as per conditions
	______________________________________________________________*/

//__________________WAY-2 [Using Binary Search logic]_____________________________________

	// int n = arr.size();
	int start = 0;
	int end = n - 1;

	while (start < end) {

		int mid = start + (end - start) / 2;

		if (arr[mid] < arr[mid + 1])
			start = mid + 1;
		else
			end = mid;
	}
	return start;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("debug.txt", "w", stderr);
#endif

	int n; cin >> n;

	int a[20];
	for (int i = 0 ; i < n ; i++)
		cin >> a[i];

	cout << "Peak Index is: " << peakIndexInMountainArray(a, n);


	return 0;
}
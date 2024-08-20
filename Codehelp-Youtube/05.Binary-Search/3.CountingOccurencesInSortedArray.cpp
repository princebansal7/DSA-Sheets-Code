#include<iostream>
#include<utility>
using namespace std;


int first(int a[], int n, int k) {

	// For 1st occurence [Part of FirstAndLastIndexBinarySearchWay() ]

	int first = -1;
	int start = 0;
	int end = n - 1;
	while (start <= end) {
		int mid = start + (end - start) / 2;
		if (a[mid] == k) {

			end = mid - 1; // again going to left part
			first = mid;
		}
		else if (a[mid] < k) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	return first;

}

int second(int a[], int n, int k) {

	// for 2nd Occurence [Part of FirstAndLastIndexBinarySearchWay() ]

	int last = -1;
	int start = 0;
	int end = n - 1;
	while (start <= end) {
		int mid = start + (end - start) / 2;
		if (a[mid] == k) {

			start = mid + 1; // again going to right part
			last = mid;
		}
		else if (a[mid] < k) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	return last;

}

//------------------ Using Binary Search------------------------------------------------

pair<int, int> CountingOccurencesBinarySearchWay(int a[], int n, int key) {
	pair<int, int> p;

	p.first = first(a, n, key);
	p.second = second(a, n, key);

	return p;
}

//__________________using Linear way O(n)_______________________________________________

void CountingOccurencesLinearWay(int a[], int n, int key) {

	//-------------------way-1----------------------------------------------------

	int count = 0;
	for (int i = 0; i < n; i++) { // as given array is sorted, this method works fine

		if (a[i] == key)
			count++;
	}
	cout << "Number of Occurences of " << key << " is: " << count << "\n";


	/*-------------------WAY-2----------------------------------------------------

		int first = -1, last = -1;

		for (int i = 0; i < n; i++) {

			if (a[i] != key)
				continue;

			if (first == -1)
				first = i;

			last = i;
		}
		int ans = last - first + 1; // No. of occurences

		cout << "Number of Occurences of " << key << " is: " << ans << "\n";

		cout << "\n";
	------------------------------------------------------------------------------*/
}

//________________________________________________________________________________________

int main()
{

#ifndef ONLINE_JUDGE
	freopen("debug.txt", "w", stderr);
#endif

	int n; cin >> n;
	int key; cin >> key;

	int a[20];

	//Enter an Sorted array with having some values with multiple occurances

	for (int i = 0 ; i < n ; i++)
		cin >> a[i];


//_______________ using Linear way____________________________________

	CountingOccurencesLinearWay(a, n, key);



//__________ using Binary Search as given array is Sorted______________

	pair<int, int> p;

	p = CountingOccurencesBinarySearchWay(a, n, key);

	cout << "Number of Occurences of " << key << " is: " << p.second - p.first + 1;


	return 0;
}
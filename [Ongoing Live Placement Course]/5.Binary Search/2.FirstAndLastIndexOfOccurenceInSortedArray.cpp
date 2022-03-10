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

pair<int, int> FirstAndLastIndexBinarySearchWay(int a[], int n, int key) {
	pair<int, int> p;

	p.first = first(a, n, key);
	p.second = second(a, n, key);

	return p;


}

//__________________using Linear way O(n)_______________________________________________

void FirstAndLastIndexLinearWay(int a[], int n, int key) {


	int first = -1, last = -1;

	for (int i = 0; i < n; i++) {

		if (a[i] != key)
			continue;

		if (first == -1)
			first = i;

		last = i;
	}
	cout << "First Occurence of " << key << " is at " << first << " index\n";
	cout << "Last Occurence of " << key << " is at " << last << " index\n";

	cout << "\n\n";

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

	FirstAndLastIndexLinearWay(a, n, key);



//__________ using Binary Search as given array is Sorted______________

	pair<int, int> p;

	p = FirstAndLastIndexBinarySearchWay(a, n, key);

	cout << p.first << " " << p.second;


	return 0;
}
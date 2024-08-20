#include<bits/stdc++.h>
using namespace std;

int BinarySeachAscending(int a[], int n, int key) {

	int start = 0;
	int end = n - 1;
	while (start <= end) {

		// int mid= (start+end)/2;

		int mid = start + (end - start) / 2; // Optimised

		if (a[mid] == key)
			return mid;
		if (key > a[mid])
			start = mid + 1;
		else
			end = mid - 1;
	}
	return -1;

}

int BinarySeachDescending(int a[], int n, int key) {
	int start = 0;
	int end = n - 1;
	while (start <= end) {

		// int mid= (start+end)/2;

		int mid = start + (end - start) / 2; // Optimised

		if (a[mid] == key)
			return mid;
		if (key > a[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}
	return -1;

}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("debug.txt", "w", stderr);
#endif

	int n, m; cin >> n >> m;
	int key; cin >> key;

	int asce[20], desc[20];

	for (int i = 0 ; i < n ; i++)
		cin >> asce[i];
	for (int i = 0 ; i < m ; i++)
		cin >> desc[i];

	int res1 = BinarySeachAscending(asce, n, key);

	if (res1 != -1)
		cout << key << " is present at index " << res1 << " in Ascending Array" << endl;
	else
		cout << "NOT FOUND\n";



	int res2 = BinarySeachDescending(desc, m, key);

	if (res2 != -1)
		cout << key << " is present at index " << res2 << " in Descending Array" << endl;
	else
		cout << "NOT FOUND\n";


	return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
	if (n < 0)
		return false;
	/*________________WAY-1_____________

		int ans = 1;
		for (int i = 0; i < 31; i++) {
			if (ans == n)
				return true;
			if (ans < INT_MAX / 2)
				ans *= 2;
		}
		return false;
	____________________________________*/

	//_____________way-2______________
	int count = 0;
	while (n != 0) {
		int bit = n & 1;
		if (bit == 1)
			count++;
		n = n >> 1;
	}
	if (count == 1)   // Any number which is in power of 2, have only 1 set bit always
		return true;
	return false;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("debug.txt", "w", stderr);
#endif
	int n; cin >> n;

	// cout << isPowerOfTwo(n) << endl;

	if (isPowerOfTwo(n))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
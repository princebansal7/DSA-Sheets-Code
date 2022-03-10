#include<iostream>
using namespace std;

void DispayArray(int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
int SumOfArray(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	return sum;
}

int main()
{
	int a[100];

	int size; cin >> size;

	for (int i = 0; i < size; i++)
		cin >> a[i];

	DispayArray(a, size);

	cout << "Sum of Array Elements: " << SumOfArray(a, size);
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& a, int n, int m, int mid)
{
    // This is Important function

    int student = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (pageSum + a[i] <= mid) {
            pageSum += a[i]; // keep the sum
        } else {
            student++;

            if (student > m || a[i] > mid)
                return false;

            pageSum = a[i]; // starting again from new student and page's sum
        }
    }
    return true;
}

int allocateBooks(vector<int>& a, int n, int m)
{
    int s = 0;
    int sum = 0;
    int res = -1;

    for (int i = 0; i < n; i++)
        sum += a[i];

    int e = sum;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (isPossible(a, n, m, mid)) {
            res = mid;
            e = mid - 1;
        } else
            s = mid + 1;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> pages(n);

    for (int i = 0; i < n; i++)
        cin >> pages[i];

    int student;
    cin >> student;

    /* You have to allocate the book to ‘m’ students
     such that the maximum number of pages assigned to a student is minimum. */

    cout << "Allocated pages are: " << allocateBooks(pages, n, student);
    return 0;
}
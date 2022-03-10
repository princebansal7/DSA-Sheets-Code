#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

//__Way-1___TC: O(nlog(n))__SC:O(1)______________

void Sort012Way1(vector<int>&a) {
    sort(a.begin(), a.end());
}

//__Way-2___TC: O(n)__SC:O(1)______________

void Sort012Way2(vector<int>&v) {
    int n = v.size();
    int zeroes, ones, twos;
    zeroes = ones = twos = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 0)
            zeroes++;
        else if (v[i] == 1)
            ones++;
        else
            twos++;
    }

    // Refilling Array

    for (int i = 0; i < zeroes; i++)
        v[i] = 0;
    for (int i = zeroes; i < (zeroes + ones); i++)
        v[i] = 1;
    for (int i = (zeroes + ones); i < (zeroes + ones + twos); i++)
        v[i] = 2;
}

//__Way-3___TC: O(n), SC:O(1) (Much Better, as only 1 travesal)______________

void Sort012DutchNFlag(vector<int>&a) {
    int n = a.size();
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {

        if (a[mid] == 0) {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if (a[mid] == 1)
            mid++;
        else {
            swap(a[mid], a[high]);
            high--;
        }
    }
    /* CAN ALSO WRITE LIKE:-

        int n = a.size();
        int low = 0, mid = 0, high = n - 1;
        while (mid <= high) {

            if (a[mid] == 0)
                swap(a[low++], a[mid++]);
            else if (a[mid] == 1)
                mid++;
            else
                swap(a[mid], a[high--]);
        }
    */
}


int main() {
    int n; cin >> n;
    vector<int> a(n);

    for (int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }

    // Sort012Way1(a);

    // Sort012Way2(a);

    Sort012DutchNFlag(a);

    for (int x : a) cout << x << " ";

    return 0;
}
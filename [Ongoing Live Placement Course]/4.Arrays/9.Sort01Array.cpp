#include<bits/stdc++.h>
using namespace std;

void Sort01(vector<int> &v, int n) {
    /*-------------WAy-1------------------------

    sort(v.begin(), v.end());

    ------------------------------------------*/

    /*-------------WAY-2---------------------
    // (sorting by brute force i.e, Wihtout Sorting Algo)

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] >= v[j])
                swap(v[j], v[i]);
        }
    }
    -----------------------------------------*/

    /* -------------WAY-3---------------------

    // By COUNTING occurences:
    int zeroes, ones;
    zeroes = ones  = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 0)
            zeroes++;
        else
            ones++;
    }

    // Refilling Array

    for (int i = 0; i < zeroes; i++)
        v[i] = 0;
    for (int i = zeroes; i < (zeroes + ones); i++)
        v[i] = 1;



    for (int i = 0; i < n; ++i)
        cout << v[i] << " ";
    ________________________________________________*/

    // _____________WAY-4_______________________________

    // Using 2 - pointer

    int left = 0, right = n - 1;

    while (left < right) {

        while (v[left] == 0 && left < right)
            left++;

        while (v[right] == 1 && left < right)
            right--;

        if (left < right) {
            swap(v[left], v[right]);
            left++;
            right--;
        }
    }

}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif

    int n; cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
        cin >> v[i];

    Sort01(v, n);

    for (int i = 0; i < n; ++i)
        cout << v[i] << " ";

    return 0;
}
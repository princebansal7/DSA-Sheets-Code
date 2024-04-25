#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
        cin >> v[i];

    /*-------------WAy-1------------------------

    sort(v.begin(), v.end());

    ------------------------------------------*/

    /*-------------WAY-2---------------------
    // (Wihtout Sorting Algo)

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] >= v[j])
                swap(v[j], v[i]);
        }
    }
    -----------------------------------------*/

    // -------------WAY-3---------------------

    // By COUNTING occurences:
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

    for (int i = 0; i < n; ++i)
        cout << v[i] << " ";

    return 0;
}
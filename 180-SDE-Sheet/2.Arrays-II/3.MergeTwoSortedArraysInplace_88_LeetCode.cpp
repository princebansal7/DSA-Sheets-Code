#include<bits/stdc++.h>
using namespace std;
#define nl "\n"

// ____________WAY-1, (Using Auxillary space)_____________________________

void mergeSorted(vector<int> &a, int m, vector<int> &b, int n) {
    int i = 0, j = 0;
    int index = 0;
    vector<int> ans(n + m);
    while (i < m && j < n) {
        if (a[i] < b[j]) {
            ans[index++] = a[i++];
        }
        else {
            ans[index++] = b[j++];
        }
    }
    while (i < m)
        ans[index++] = a[i++];

    while (j < n)
        ans[index++] = b[j++];
    a = ans;
}
// ____________________________________________________________

// ____________WAY-2, SC: O(1) (Using Insertion sort Intitution)_________



//_______WAY-3 SC: O(1) (Using GAP Algorithm)_______________________
/* formula:-
        GAP = ceil[(size1+size2)/2], runs till gap==1

*/
int main()
{
    int n, m;

    cin >> m >> n;

    vector<int> a(m + n), b(n);

    for (int i = 0 ; i < m ; i++)
        cin >> a[i];

    for (int i = 0 ; i < n ; i++)
        cin >> b[i];


    mergeSorted(a, m, b, n);

    for (int x : a)
        cout << x << " ";
    cout << nl;
    return 0;
}
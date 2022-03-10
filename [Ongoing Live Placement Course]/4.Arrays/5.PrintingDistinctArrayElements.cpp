#include<bits/stdc++.h>
using namespace std;

void PrintDistinct(int a[], int n) {
    /*____________WAY-1 [O(n.log(n)]________________________

       bool flag ;
       sort(a, a + n);
       for (int i = 0; i < n; ++i)
       {
           flag = false;

           if (i < n - 1 && a[i] == a[i + 1]) {
               flag = true;
           }
           if (flag == false) {
               cout << a[i] << " ";
           }
       }
    _______________________________________________________*/

    //_____________way-2 [O(n)]____________________

    unordered_set<int> s;

    // Traverse the input array
    for (int i = 0; i < n; i++)
    {
        // If not present, then put it in
        // hashtable and print it
        if (s.find(a[i]) == s.end())
        {
            s.insert(a[i]);
            cout << a[i] << " ";
        }
    }

    cout << endl;
}


int main()
{
    int a[20] = {0};

    int n; cin >> n;

    for (int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }

    PrintDistinct(a, n);

    return 0;
}
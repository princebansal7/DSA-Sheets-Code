#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MOD 1000000007
typedef long long ll;

int pageCount(int n, int target) {
    int fpage = 1, bpage = 0;
    for (int front = 1; front <= n; front++)
    {
        if (front + 1 == target or front + 2 == target)
        {
            fpage = fpage + 0;
            break;
        }
        else {
            fpage++;
        }
    }
    for (int back = n; back >= 1; back--)
    {
        if (back - 1 == target)
        {
            bpage += 0;
            break;
        }
        else {
            bpage++;
        }
    }

    return min(fpage, bpage);
}


int main()
{
    int n, target;
    cin >> n >> target;
    cout << pageCount(n, target);
    return 0;
}
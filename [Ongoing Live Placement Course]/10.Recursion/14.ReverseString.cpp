#include <iostream>
#include <utility>
using namespace std;
#define nl "\n"
#define ll long long

// Way-1: Using Two-pointers
void reverseTwoPtr(string &s, int i, int j)
{
    if (i > j)
        return;

    swap(s[i], s[j]);
    reverseTwoPtr(s, i + 1, j - 1);

    /*---------Way-2---------------------

    if (i < j)
    {
        swap(s[i], s[j]);
        reverseTwoPtr(s, i + 1, j - 1);
    }
    return;
    ------------------------------------*/
}

// Way-2:  Using 1 pointer Only

void reverseOnePtr(string &s, int i, int size)
{
    if (i > size / 2)
        return;

    swap(s[i], s[size - 1]);
    i++;
    size = size - i - 1;
    reverseTwoPtr(s, i, size);
}
int main()
{
    string s;
    cin >> s;
    int size = s.length();
    int i = 0, j = size - 1;

    // reverseTwoPtr(s, i, j);
    // cout << s << nl;

    reverseOnePtr(s, i, size);
    cout << s << nl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl "\n"

int getLength(char str[])
{

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

void reverse(char str[], int n)
{
    int s = 0, e = n - 1;

    while (s < e) {
        swap(str[s++], str[e--]);
    }
}

int main()
{
    int length;

    char str[50];

    cin >> str;

    length = getLength(str);

    cout << "reverse is:" << nl;

    reverse(str, length);

    cout << str << nl;

    return 0;
}
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
#define nl "\n"
#define ll long long

// WAY-1 : Using Two-Pointer
void reverse1(string &s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
        swap(s[i++], s[j--]);
}

// WAY-2 : Using 1 pointer
void reverse2(string &s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
        swap(s[i], s[n - i - 1]);
}

// WAY-3 : Using Stack
void reverse3(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        st.push(s[i]);
    }
    int index = 0;
    while (st.empty() != true)
    {
        s[index] = st.top();
        st.pop();
        index++;
    }
}

// WAY-4 : Using In-Built function
void reverse4(string &s)
{
    reverse(s.begin(), s.end());
}


int main()
{
    string s;
    getline(cin, s);

    // reverse1(s);

    // reverse2(s);

    // reverse3(s);

    reverse4(s);

    cout << s << nl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MOD 1000000007
typedef long long ll;

bool matching(char a, char b)
{
    return ((a == '(' && b == ')') or (a == '{' && b == '}') or (a == '[' && b == ']'));
}

bool Isbalanced(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == '(' or str[i] == '[' or str[i] == '{')
            s.push(str[i]);
        else
        {
            if (s.empty() == true)
                return false;
            else if (matching(s.top(), str[i]) == false)
                return false;
            else
                s.pop();
        }
    }
    return (s.empty() == true);
}

// Only Inputs will be '[', '{', '(', ')', '}', ']' (in any Order)

int main()
{
    fast_io;
    string str; cin >> str;
    if (Isbalanced(str) == true)
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}
/*
    @author: princebansal_

*/

#include <iostream>
#include <stack>
using namespace std;
#define nl "\n"
#define ll long long

//----WAY-1 (Using Stack) TC:O(N), SC:O(N)----------------

void reverseWords1(string &s)
{
    s += " ";
    stack<string> st;
    string temp;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            st.push(temp);
            temp = "";
        }
        else
            temp += s[i];
    }
    string ans = "";
    while (st.size() != 1)
    {
        ans += (st.top() + " ");
        st.pop();
    }
    ans += st.top();
    cout << ans << nl;
}

//------WAY-2 (Optimised) TC:O(N), SC:O(N)----------------

void reverseWords2(string &s)
{
    int left = 0;
    int right = s.length() - 1;

    string temp = "";
    string ans = "";

    // Iterate the string and keep on adding to form a word
    // If empty space is encountered then add the current word to the result
    while (left <= right)
    {
        char ch = s[left];
        if (ch != ' ')
        {
            temp += ch;
        }
        else if (ch == ' ')
        {
            if (ans != "")
                ans = temp + " " + ans;
            else
                ans = temp;
            temp = "";
        }
        left++;
    }
    // If not empty string then add to the result(Last word is added)

    if (temp != "")
    {
        if (ans != "")
            ans = temp + " " + ans;
        else
            ans = temp;
    }
    cout << ans << nl;
}

int main()
{
    string s;
    getline(cin, s);

    // reverseWords1(s);

    reverseWords2(s);

    return 0;
}
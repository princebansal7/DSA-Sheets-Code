#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl "\n"

/* When only 1-1 whitespaces are allowed__________________________________

eg:
    input:  "the sky is blue"
    output: "blue is sky the"
*/

// WAY-1 (using Stack)

string reverseWords1(string s)
{
    stack<string> st;

    string temp = "", ans = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            temp += s[i];
        } else {
            st.push(temp);
            temp = "";
        }
    }
    st.push(temp);
    while (st.empty() != true) {
        ans += st.top();
        st.pop();
        ans += " ";
    }
    ans.pop_back();
    return ans;
}

// WAY-2 (Using Vector)

string reverseWords2(string s)
{
    vector<string> temp;
    string str = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            temp.push_back(str);
            temp.push_back(" ");
            str = "";
        } else
            str += s[i];
    }
    temp.push_back(str);

    str = "";
    for (int i = temp.size() - 1; i >= 0; i--) {
        str += temp[i];
    }
    return str;
}
//_________________________________________________________
/* When Multiple whitespaces allowed
    input:   "   a good   example  "
    output:  "example good a"
*/

string reverseWords3(string s)
{

    vector<string> res;

    // putting the whole given string in a string vector with ignoring all the spaces

    for (int i = 0; i < s.size(); i++) {

        if (s[i] == ' ')
            continue;

        string temp = "";

        while (i < s.size() && s[i] != ' ') {
            temp.push_back(s[i]);
            i++;
        }
        res.push_back(temp);
    }

    // simply tarversing the vector in reverse and putting 1 space in b/w each word

    string final;

    for (int i = res.size() - 1; i >= 0; i--) {

        string revTemp = res[i];
        final += revTemp;

        if (i > 0) // putting spaces
            final += " ";
    }
    return final;
}

int main()
{
    fast_io

        string s;
    getline(cin, s);

    cout << reverseWords3(s) << nl;

    return 0;
}
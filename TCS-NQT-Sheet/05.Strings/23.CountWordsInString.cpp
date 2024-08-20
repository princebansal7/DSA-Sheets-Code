/*
    @author: princebansal_

*/
#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

void countWords1(string &s)
{
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            cnt++;
    }
    cout << cnt + 1 << nl;
}

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int main()
{
    string s;
    getline(cin, s);

    countWords1(s);

    return 0;
}
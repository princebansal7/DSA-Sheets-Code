/*
    @author: princebansal_

*/

#include <iostream>
#include <algorithm>
using namespace std;
#define nl "\n"
#define ll long long

//---------WAY-1 (using Inbuilt sort, TC: O(nlogn))------------------

void sortString1(string &s)
{
    sort(s.begin(), s.end());
    cout << s << nl;
}

//---------WAY-2 (using sorting, TC: O(n^2))------------------

void sortString2(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            if (s[i] >= s[j])
                swap(s[i], s[j]);
        }
    }
    cout << s << nl;
}

//-----WAY-3  (Bubble sort)--------

void sortString3(string &s)
{
    int n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (s[j] > s[j + 1])
            {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    cout << s << nl;
}

int main()
{
    string s;
    cin >> s;

    // sortString1(s);

    // sortString2(s);

    sortString3(s);

    return 0;
}
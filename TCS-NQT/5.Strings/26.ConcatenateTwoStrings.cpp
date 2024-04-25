/*
    @author: princebansal_

*/

#include <iostream>
#include <string.h>
using namespace std;
#define nl "\n"
#define ll long long

//---------WAY-1-----------------------

void concate1(string &s1, string &s2)
{

    // USING  +  operator
    cout << s1 + s2 << nl;
}

//--------WAY-2-----------------------------

void concate2(string &s1, string &s2)
{
    string ans = s1;
    for (char ch : s2)
        ans.push_back(ch); // ans+=ch;

    cout << ans << nl;
}

//-----WAY-3--------------------

void concate3(string &s1, string &s2)
{
    s1.append(s2);

    cout << s1 << nl;
}

//----WAY-4-------------------------

void Cstyleconcate()
{
    // strcat works omly for char array (like in  C lang)

    char s1[] = "Prince"; // or {'P','r','i','n','c','e','\0'};
    char s2[] = "Bansal"; // or {'B','a','n','s','a','l','\0'};

    strcat(s1, s2);

    cout << s1 << nl;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    // concate1(s1, s2);

    concate2(s1, s2);

    // concate3(s1, s2);

    // Cstyleconcate();

    return 0;
}
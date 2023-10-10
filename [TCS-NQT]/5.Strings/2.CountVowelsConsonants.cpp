#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

//----------WAY-1---------------------------------------------

void CountVowelConsonant1(string &s)
{
    int Vcnt = 0, Ccnt = 0, Wcnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] == 'a' || s[i] == 'A') || (s[i] == 'e' || s[i] == 'E') || (s[i] == 'i' || s[i] == 'I') || (s[i] == 'o' || s[i] == 'O') || (s[i] == 'u' || s[i] == 'U'))
        {
            Vcnt++;
        }
        else if (s[i] == ' ')
        {
            Wcnt++;
        }
        else
        {
            Ccnt++;
        }
    }
    cout << "Vowels count: " << Vcnt << nl;
    cout << "Consonant count: " << Ccnt << nl;
    cout << "Whitespace count: " << Wcnt << nl;
}

// ----------WAY-2-----------------------------------------

void CountVowelConsonant2(string &s)
{
    int n = s.length();
    int Vcnt = 0, Ccnt = 0, Wcnt = 0;

    for (int i = 0; i < n; i++) // converting given string to lowercase
    {
        s[i] = towlower(s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            Vcnt++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            Ccnt++;
        else if (s[i] == ' ')
            Wcnt++;
    }
    cout << "Vowels count: " << Vcnt << nl;
    cout << "Consonant count: " << Ccnt << nl;
    cout << "Whitespace count: " << Wcnt << nl;
}

int main()
{
    string s;
    getline(cin, s);

    CountVowelConsonant1(s);
    CountVowelConsonant2(s);

    return 0;
}
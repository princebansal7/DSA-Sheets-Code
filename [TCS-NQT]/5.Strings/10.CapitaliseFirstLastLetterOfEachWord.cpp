#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

//-------- Way-1------------------------------------------------
void capitalise1(string &s)
{
    string temp, res;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            temp += s[i];
        }
        else
        {
            int l = temp.length();
            temp[0] = temp[0] - 'a' + 'A';
            temp[l - 1] = temp[l - 1] - 'a' + 'A';
            res += (temp + ' ');
            temp = "";
        }
    }
    // for last word
    int l = temp.length();
    temp[0] = temp[0] - 'a' + 'A';
    temp[l - 1] = temp[l - 1] - 'a' + 'A';
    res += temp;
    cout << res << nl;
}

//----------WAY-2----------------------------------------------------

void capitalise2(string &str)
{
    int size = str.length();
    for (int i = 0; i < size; i++)
    {
        if (i == 0 || i == (size - 1) && (int)str[i] >= 97) // Converting first and last index character to uppercase
        {
            str[i] = ((char)((int)str[i] - 32));
        }
        else if (str[i] == ' ') // Converting characters present before and after space to uppercase
        {
            if (((int)str[i - 1] - 32) >= 65) // Checking if already not an uppercase letter
                str[i - 1] = ((char)((int)str[i - 1] - 32));

            if (((int)str[i + 1] - 32) >= 65) // Checking if already not an uppercase letter
                str[i + 1] = ((char)((int)str[i + 1] - 32));
        }
    }
    cout << str << nl;
}

// ---- WAY-3--------------------------------------------

void capitalise3(string &str)
{
    int size = str.length();
    for (int i = 0; i < size; i++)
    {
        if (i == 0 || i == (size - 1)) // Converting first and last index character to uppercase
        {
            str[i] = towupper(str[i]);
        }
        else if (str[i] == ' ') // Converting characters present before and after space to uppercase
        {
            str[i - 1] = towupper(str[i - 1]);
            str[i + 1] = towupper(str[i + 1]);
        }
    }

    cout << str << nl;
}
int main()
{
    string s;
    getline(cin, s);

    // capitalise1(s);

    // capitalise2(s);

    capitalise3(s);

    return 0;
}
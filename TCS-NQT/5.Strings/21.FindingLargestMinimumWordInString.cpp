/*
    @author: princebansal_

*/

#include <iostream>
#include <cstring>
using namespace std;
#define nl "\n"
#define ll long long

//-----------GFG Code-----------------------------------------------------

void minMaxLengthWords(string &s, string &minWord, string &maxWord)
{
    int len = s.length();
    int startIndex = 0, endIndex = 0;

    int min_length = len, min_start_index = 0, max_length = 0, max_start_index = 0;
    while (endIndex <= len)
    {
        if (endIndex < len && s[endIndex] != ' ')
            endIndex++;
        else
        {
            int curr_length = endIndex - startIndex;

            if (curr_length < min_length)
            {
                min_length = curr_length;
                min_start_index = startIndex;
            }

            if (curr_length > max_length)
            {
                max_length = curr_length;
                max_start_index = startIndex;
            }
            endIndex++;
            startIndex = endIndex;
        }
    }
    minWord = s.substr(min_start_index, min_length);
    maxWord = s.substr(max_start_index, max_length);
}

int main()
{
    string s;
    getline(cin, s);
    string minWord, maxWord;

    minMaxLengthWords(s, minWord, maxWord);

    cout << "Minimum length word: " << minWord << nl;
    cout << "Maximum length word: " << maxWord << nl;
}
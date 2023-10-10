/*
    @author: princebansal_

*/

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

// O(n^2)

void HighestRepeatedLetters(string &str)
{
    int len = str.length();

    int maxWord = 0;

    int curr_maxWord = 0;

    string result = "";

    for (int left = 0; left < len;)
    {

        int right = left + 1;
        while (str[right] != ' ' && right < len)
        {
            right++;
        }

        int frequency[26] = {0};
        curr_maxWord = 0;

        for (int index = left; index < right; index++)
        {
            frequency[str[index] - 'a']++;
        }
        for (int index = 0; index < 26; index++)
        {
            if (frequency[index] > 1)
            {
                curr_maxWord++;
            }
        }

        if (curr_maxWord > maxWord)
        {
            maxWord = curr_maxWord;
            result = "";
            for (int j = left; j < right; j++)
                result += str[j];
        }

        left = right + 1;
    }

    if (result.empty())
    {
        cout << "-1";
    }
    else
    {

        cout << "Word with highest number of repeated letters : ";
        cout << result << "\n";
    }
}

int main()
{
    string s;
    getline(cin, s);

    HighestRepeatedLetters(s);

    return 0;
}
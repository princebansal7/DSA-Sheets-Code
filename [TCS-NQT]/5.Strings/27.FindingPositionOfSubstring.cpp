/*
    @author: princebansal_

*/

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

//----------------------WAY-1--------------------------------------------------------------
/*
Solution 1: Naive Approach

Run two for loops i,j.
i looping from [0, N – M – 1] and j looping from [0, M -1].
Here N is the length of text and M is the length of pattern.
Why is the outer loop running for N – M – 1 ??

For a given string to have a substring of another string it must contain the length of the
substring to be found in the string.If it doesn’t have the length of the substring there is no
point in searching any further.
Now run an outer loop from i -> [0, N – M – 1]
for every index i check for the substring this can be done by storing
 the index of i into some variable temp and running an inner loop from j -> [0, M]
check if the characters of text and pattern are matching or not from the index [temp, temp + M].

after coming out of the inner loop check if (j == M) then return i.

If the substring is not found return -1.
*/

int findSubstr1(string &word, string &pattern)
{
    int n = word.size();
    int m = pattern.size();

    for (int i = 0; i < n; i++)
    {
        int temp = i;
        int j;
        for (j = 0; j < m; j++)
        {
            if (word[temp] != pattern[j])
                break;
            temp++;
        }
        if (j == m)
            return i;
    }
    return -1;
}

//-------WAY-2 (Using find() function)-----------------------------

int findSubstr2(string &word, string &pattern)
{
    int index = word.find(pattern); // find() returns the index for 1st occurence of 1st string
    if (index == string::npos)
        return index;
    return index;
}

int main()
{
    string word, pattern;
    cin >> word >> pattern;

    int indexPos;

    // indexPos = findSubstr1(word, pattern);
    indexPos = findSubstr2(word, pattern);

    if (indexPos != -1)
        cout << pattern << " Present at index:" << indexPos << nl;
    else
        cout << "Not present: " << indexPos << nl;

    return 0;
}

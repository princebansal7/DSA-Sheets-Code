/*
    @author: princebansal_
    Sheet: https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/
*/

#include <iostream>
#include <vector>
using namespace std;
#define nl '\n'

void bruteForceApproach(vector<int>& v, int n)
{
}

void optimalApproach(vector<int>& v, int n)
{
}

int main()
{
    // vector<int> v { 7, 2, 1, 4, 5, 6, 7, 7, 7, 45, 69, 100, 12, 23, 5, 6 };
    vector<int> v { 1, 2, 3, 4, 4, 5, 6, 7, 8, 8, 9, 10 };
    int n = v.size();

    bruteForceApproach(v, n);
    optimalApproach(v, n);

    return 0;
}
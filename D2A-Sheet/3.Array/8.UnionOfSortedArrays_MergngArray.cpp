/*
    @author: princebansal_
    Sheet: https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/
*/

#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
#define nl '\n'

void printArr(vector<int>& arr, int n)
{
    cout << "Array is: " << nl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << nl;
}

void bruteForce1(vector<int>& v1, vector<int>& v2)
{
    set<int> st;
    for (int i = 0; i < v1.size(); i++)
        st.insert(v1[i]);
    for (int i = 0; i < v2.size(); i++)
        st.insert(v2[i]);

    vector<int> unionArr;
    for (int x : st) {
        unionArr.push_back(x);
    }
    printArr(unionArr, unionArr.size());
}

void bruteForce2(vector<int>& v1, vector<int>& v2)
{
    map<int, int> mp;
    for (int i = 0; i < v1.size(); i++)
        mp[v1[i]]++;
    for (int i = 0; i < v2.size(); i++)
        mp[v2[i]]++;

    vector<int> unionArr;
    for (auto x : mp) {
        cout << x.first << " " << x.second << nl;
    }
    for (auto x : mp) {
        unionArr.push_back(x.first);
    }
    printArr(unionArr, unionArr.size());
}

void optimal(vector<int>& v1, vector<int>& v2)
{
    int n1 = v1.size();
    int n2 = v2.size();
    int i = 0, j = 0;
    vector<int> sorted;
    while (i < n1 && j < n2) {
        if (v1[i] != v2[j]) {
            sorted.push_back(v1[i]);
            i++;
        }
    }
}

int main()
{
    vector<int> v1 { 1, 2, 3, 4, 4, 5, 5 };
    vector<int> v2 { 2, 3, 4, 4, 5, 7, 8 };

    // bruteForce1(v1, v2);
    bruteForce2(v1, v2);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl "\n"

// 1.___Basic Understanding based tried solution:

void compress1(vector<char>& chars)
{

    map<char, int> mp; // can use unordered_map too, as we just want the length of compressed string

    for (char ch : chars) {
        mp[ch]++;
    }

    cout << "Map is:\n";
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;

    string s;
    for (auto x : mp) {
        if (x.second == 1) { // kyuki, agr 1 hi character hai, toh sirf character chahiye bas, uska count nhi
            s += x.first;
            continue;
        }
        s += x.first;
        s += to_string(x.second);
    }

    cout << "\nCompressed string is: " << s << endl;
    cout << "Length is: " << s.size() << endl;

    // return s.size();
}

// 2.______Partial Correct code: (after a little better understanding)_______________

/* Incorrect because:

        given: ["a","a","a","b","b","a","a"]  => characters can repeat again, we have to maintain appearing order

        output: ["a","5","b","2"]

        expected: ["a","3","b","2","a","2"]

*/
int compress2(vector<char>& chars)
{

    map<char, int> mp;

    for (char ch : chars) {
        mp[ch]++;
    }

    string s;

    for (auto x : mp) {
        if (x.second == 1) {
            s += x.first;
            continue;
        }
        s += x.first;
        s += to_string(x.second);
    }

    /*
        we had to copy compressed string in the given
        char array, and that length has to be returned.

    */

    for (int i = 0; i < s.size(); i++) {
        chars[i] = s[i];
    }
    return s.size();
}

// 3.__Efficient & Correct Solution_____________________

int compress3(vector<char>& a)
{

    int i = 0;
    int index = 0;
    int n = a.size();

    while (i < n) {

        int j = i + 1;

        // traversing till same substring
        // => either whole char array is traversed or some new character is encountered

        while (j < n && a[i] == a[j]) {
            j++;
        }

        a[index++] = a[i]; // storing that character in same given array

        // now, to store that character's count in given char array:-

        int count = j - i; // storing number of same characters encountered

        if (count > 1) { // skipping count=1, as per conditions

            string temp = to_string(count);

            // storing in out given array
            for (char cnt : temp) {
                a[index++] = cnt;
            }
        }

        i = j; // to start from next substring
    }

    // for (int i = 0; i < index; i++)
    //     cerr << a[i] << " ";

    return index; // as index will finally be (compressed char array length)
}

int main()
{
    fast_io

        int n;
    cin >> n;
    vector<char> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    // compress1(a);
    // cout << compress2(a) << nl;

    int ans = compress3(a);
    cout << ans << nl;

    for (int i = 0; i < ans; i++)
        cout << a[i];

    return 0;
}
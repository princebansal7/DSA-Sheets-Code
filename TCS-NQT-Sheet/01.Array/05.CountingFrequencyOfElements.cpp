#include <iostream>
#include <unordered_map>
using namespace std;
#define nl "\n"
#define ll long long

int arr[100];
int freq[1000];

/*---------- WAY-1------------------------------------

void CountFreq1(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 0; i < 1000; i++)
    {
        if (freq[arr[i]] != 0)
        {
            cout << arr[i] << "-> " << freq[arr[i]] << nl;
        }
    }
}
---------------------------------------------------------*/

/*--------- Way-2------------------------------------------

bool visited[100];
void CountFreq2(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true)
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = true;
            }
        }
        cout << arr[i] << "-> " << count << nl;
    }
}
---------------------------------------------------------*/

//--------------------Way-3--------------------------------

void CountFreq3(int arr[], int n)
{

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // Map Traversal way-1:

    for (auto val : mp) { // this val is 'const pair<int,int>'
        cout << val.first << "-> " << val.second << nl;
    }

    cout << nl;

    // Map Traversal way-2:

    unordered_map<int, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << "-> " << it->second << nl;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    CountFreq3(arr, n);

    return 0;
}
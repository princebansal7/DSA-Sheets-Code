#include<bits/stdc++.h>
using namespace std;


/*_______________________WAY-1 (Correct one)__________________________________________

vector<vector<int>>  findTriplets(vector<int>arr, int n, int K) {
    vector<vector<int>> ans;

    //sort first so it becomes easy
    sort(arr.begin(), arr.end());
    int left, right; //2ptr approach
    for (int i = 0; i < n; i++) {
        left = i + 1;
        right = n - 1;
        //terminary condn
        while (left < right) {
            //check for sum, here we fix arr[i], and then form 2 pair sum over remaining elements of array
            if (arr[i] + arr[left] + arr[right] == K) {
                //we got it, push it back
                ans.push_back({arr[i], arr[left], arr[right]});
                int x = arr[left];
                int y = arr[right];
                //skipping the same returned elements of left and right if they are present in duplicate form
                while (left < right && arr[left] == x) {
                    left++;
                }
                while (left < right && arr[right] == y) {
                    right--;
                }
            } //if end
            //if not match then in else cases move left/right pointer as per condition
            else if (arr[i] + arr[left] + arr[right] < K) {
                left++;
            }
            else {
                //arr[i] + arr[left] + arr[right] > K
                right--;
            }
        }//while end
        //we need to skip duplicates of arr[i], ith element if present
        while (i + 1 < n && arr[i] == arr[i + 1]) {
            i++;
        }
    }//for end
    return ans;
}
____________________________________________________________________*/


/*_______________________WAY-2______________________________________

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {

    vector<vector<int>> ans;
    sort(arr.begin() , arr.end());
    int left , right ;
    for (int i = 0 ; i < n ; i++)
    {
        left = i + 1 ;
        right = n - 1;
        while (left < right)
        {
            if (arr[left] + arr[right] + arr[i] == K)
            {
                ans.push_back({arr[i], arr[left], arr[right]});
                break;
            }
            else if (arr[left] + arr[right] + arr[i] < K) {
                left++;
            }
            else {
                right--;
            }
        }
    }
    return ans;
}
____________________________________________________________________*/

// __________________________WAY-3__________________________________


vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {

    vector<vector<int>> ans;

    // sort(arr.begin() , arr.end());

    for (int i = 0 ; i < n ; i++) {
        for (int j = i + 1; j < n ; j++) {
            for (int k = j + 1; k < n ; k++) {
                if (arr[i] + arr[j] + arr[k] == K) {

                    ans.push_back({arr[i], arr[j], arr[k]});

                    return ans;
                }

            }
        }

    }
    ans = {{ -1}};
    return ans;
}

int main()
{

    int n; cin >> n ;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int k; cin >> k;

    vector<vector<int>>  ans;
    ans = findTriplets(v, n, k);

    // for (int i = 0; i < ans.size() ; i++) {
    //     for (int j = 0; j < ans.size(); j++)
    //         cout << ans[i][j] << " ";
    //     cout << endl;
    // }
    for (vector<int> vect1D : ans)
    {
        for (int x : vect1D)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;

}
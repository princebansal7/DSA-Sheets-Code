#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int n; cin >> n;

    // ----------WAY-1---------------
    int answer = 0;
    int i = 0;
    while (n != 0) {
        int bit = (n & 1);
        answer = ( pow(10, i) * bit ) + answer;
        n = n >> 1;
        i++;
    }
    cout << answer;

    /*----------WAY-2---------------

    vector<int>v;
    int temp = n;
    while (n != 0) {
        v.push_back( n % 2);
        n = n / 2;
    }
    cout << "Decimal to Binary:\n";
    reverse(v.begin(), v.end());
    cout << temp << " --> ";
    for (int x : v)
        cout << x;

    -------------------------------*/



    return 0;
}


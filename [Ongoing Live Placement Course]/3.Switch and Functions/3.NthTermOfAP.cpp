#include<iostream>
using namespace std;

int ApTerm(int n) {
    int AP = 3 * n + 7; // Given AP
    return AP;
}

int main()
{

    int n; cin >> n;
    cout << n << "th term of Given AP is: " << ApTerm(n);
    return 0;
}
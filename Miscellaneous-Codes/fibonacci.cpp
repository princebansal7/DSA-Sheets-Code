#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    cout << "Fibonacci sequence upto " << n  << " terms:" << endl;
    int num1 = 0, num2 = 1;
    cout << num1 << " " << num2 << " ";

    for (int i = 1; i <= n - 2; i++) {
        int sum = num1 + num2;
        cout << sum << " ";

        //order is important
        num1 = num2;
        num2 = sum;
    }

    return 0;
}
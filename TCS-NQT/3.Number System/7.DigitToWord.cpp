#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

void SayDigits(int n)
{
    string val = to_string(n);

    for (int i = 0; i < val.size(); i++)
    {
        int digit = val[i] - '0';
        switch (digit)
        {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        }
    }
    cout << nl;
}

int main()
{
    int n;
    cin >> n;

    SayDigits(n);

    return 0;
}
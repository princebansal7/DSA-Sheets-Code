#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

void ToHome(int src, int dest)
{
    cout << "Source: " << src << " Destination: " << dest << nl;

    if (src == dest)
    {
        cout << "=> Reached Home!!" << nl;
        return;
    }
    src++;
    ToHome(src, dest);
}

int main()
{
    int src, dest;
    cin >> src >> dest;

    ToHome(src, dest);
    return 0;
}
/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

/* Function returns log2(N), when n is in power of 2
   Function returns floor(log2(n)), when n is not power of 2
     for n >= 1
     fun(1) = 0
     fun(2) = 1
     fun(4) = 2
     fun(8) = 3
     ...
     ...
     fun(9) = 3
     fun(10) = 3
     ...
     ...
     fun(16) = 4
     fun(32) = 5
     ...
     ...
*/

int fun(int n)
{
    if (n == 1)
        return 0;
    else
        return 1 + fun(n / 2);

    // if fun(n/3) => returns floor(log3(N)) , base condition changes too as if(n<3) return 0;
}

int main()
{
    int n;
    cin >> n;
    cout << fun(n) << nl;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{

    int n; cin >> n;
    while (1) {
        switch (n) {
        case 1:
            cout << "Hello 1" << endl;
        case 2:
            cout << "Hello 2" << endl;
        case 3:
            cout << "Hello 3" << endl;
            exit(1); // Terminates the program
        case 4:
            cout << "Hello 4" << endl;
        // break;
        default:
            cout << "Default" << endl;
        }
    }
    /*
       Continue is not valid in switch because we don't have the next iteration
       value here, as it's not loop, it is a condition case, continue is used
       in loops only
    */
    return 0;
}
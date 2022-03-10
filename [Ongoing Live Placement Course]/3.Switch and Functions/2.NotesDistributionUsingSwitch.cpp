#include<iostream>
using namespace std;

int main()
{

    int amount; cin >> amount;
    int hundered, fifty, twenty, one;
    // hundered = fifty = twenty = one = 0;
    switch (1) {
    case 1:
        hundered = amount / 100;
        amount = amount % 100;
        cout << "100RS Notes: " << hundered << endl;

    case 2:
        fifty = amount / 50;
        amount = amount % 50;
        cout << "50RS Notes: " << fifty << endl;

    case 3:
        twenty = amount / 20;
        amount = amount % 20;
        cout << "20RS Notes: " << twenty << endl;

    case 4:
        one = amount / 1;
        // amount=amount%1;
        cout << "1RS Notes: " << one << endl;
    }
    return 0;
}
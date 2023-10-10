#include<iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif
    char ch; cin >> ch;
    if ((ch >= 33 and ch <= 47) or (ch >= 58 and ch <= 64) or (ch >= 91 and ch <= 96) or (ch >= 123 and ch <= 126))
        cout << "Special character: " << ch << " with ASCII value: " << (int)ch << endl;
    else if (ch >= 48 and ch <= 57)
        cout << "Number character: " << ch << " with ASCII value: " << (int)ch << endl;
    else if (ch >= 65 and ch <= 90)
        cout << "Uppercase character: " << ch << " with ASCII value: " << (int)ch << endl;
    else if (ch >= 97 and ch <= 122)
        cout << "Lowercase character: " << ch << " with ASCII value: " << (int)ch << endl;
    return 0;
}
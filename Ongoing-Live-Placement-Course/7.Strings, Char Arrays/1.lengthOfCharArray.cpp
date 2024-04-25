#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl "\n"

int getLength(char str[])
{

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main()
{
    int length;

    char str[50];

    // cin >> str;

    // length = getLength(str);
    // cout << "Length is: " << length << nl;

    cin.getline(str, 50);

    length = getLength(str);
    cout << "Length is: " << length << nl;

    return 0;
}

/*

Char Array vs String


______char Array_________________________________


#include <iostream>
#include <string>
using namespace std;

int main () {
  string mystr;
  cout << "What's your name? ";
  getline (cin, mystr);
  cout << "Hello " << mystr << ".\n";
  cout << "What is your favorite team? ";
  getline (cin, mystr);
  cout << "I like " << mystr << " too!\n";
  return 0;
}

_______Strings____________________________________

#include <iostream>
using namespace std;

int main () {
  char name[256], title[256];

  cout << "Enter your name: ";
  cin.getline (name,256);

  cout << "Enter your favourite movie: ";
  cin.getline (title,256);

  cout << name << "'s favourite movie is " << title;

  return 0;
}


*/
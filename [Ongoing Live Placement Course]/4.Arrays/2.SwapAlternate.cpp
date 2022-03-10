#include<iostream>
using namespace std;

void DisplayArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

}
void SwapAlternate(int a[], int n) {

    /*______________way-1_______________

       int first = 0;
       int next = 1;
       while (next < n && first < n) {
           swap(a[first], a[next]);
           first += 2;
           next += 2;
       }
    _____________________________________*/
// _______________way-2______________

    for (int i = 0; i < n; i += 2) {
        if (i + 1 < n) {
            swap(a[i], a[i + 1]);
        }
    }

}

int main()
{
    int a[20];
    int n; cin >> n;
    for (int i = 0 ; i < n ; i++)
        cin >> a[i];


    SwapAlternate(a, n);

    DisplayArray(a, n);
    return 0;
}
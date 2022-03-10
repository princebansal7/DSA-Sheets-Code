#include<iostream>
using namespace std;
#define nl "\n" 

int main(){
    int n = 5;
    int *ptr = &n;
    cout<<"value of n:"<<n<<nl;
    cout<<"value of n:"<<*ptr<<nl;
    cout<<"Address of n:"<<&n<<nl;
    cout<<"Address of n:"<<ptr<<nl;
    
}
#include <bits/stdc++.h>
using namespace std;

/*________Bakwas Method_______________________

    int B2D(string &a){
        int n=a.length();
        int ans=0;
        int j=0;
        for(int i=n-1;i>=0;i--){
            if(a[i]=='1'){
                ans+=pow(2,j);
            }
            j++;
        }
        return ans;
    }

    string D2B(int n){
        string ans;
        if(n==0)
            return "0";
        while(n>0){
            int bit = n&1;
            if(bit==0)
                ans.push_back('0');
            else
                ans.push_back('1');
            n=n>>1;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    string addBinary(string a, string b) {

        int val = B2D(a) + B2D(b);

        string ans = D2B(val);

        return ans;
    }
 _______________________________________________*/

//______________FASTER METHOD____________________

string addBinary(string a, string b)
{

    int n = a.size(), m = b.size();
    string sum;
    int carry = 0;

    int i = n - 1, j = m - 1;
    while (i >= 0 || j >= 0 || carry > 0) {
        if (i >= 0) {
            carry += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            carry += b[j] - '0';
            j--;
        }
        sum += (carry % 2) + '0';
        carry /= 2;
    }
    reverse(sum.begin(), sum.end());
    return sum;
}

int main()
{

    string s1, s2;

    cin >> s1 >> s2;

    string ans = addBinary(s1, s2);
    cout << ans;

    return 0;
}
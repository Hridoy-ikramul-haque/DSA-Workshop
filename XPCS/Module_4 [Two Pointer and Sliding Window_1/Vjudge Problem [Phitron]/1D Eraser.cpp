//https://codeforces.com/contest/1873/problem/D
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l = 0, count = 0;
        while(l<=n)
        {
            if(s[l]=='B')
            {
                count++;
                l += k;
            }
            else{
                l++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
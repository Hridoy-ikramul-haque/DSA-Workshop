// https://codeforces.com/problemset/problem/2065/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        string ori = s.substr(0, s.length() - 2);
        cout << ori + "i" << endl;
    }

    return 0;
}
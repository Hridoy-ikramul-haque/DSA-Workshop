// https://codeforces.com/problemset/problem/2055/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int dist = abs(a - b);
        if (dist % 2 == 1)
            cout << "NO\n"; // Bob wins
        else
            cout << "YES\n"; // Alice wins
    }

    return 0;
}
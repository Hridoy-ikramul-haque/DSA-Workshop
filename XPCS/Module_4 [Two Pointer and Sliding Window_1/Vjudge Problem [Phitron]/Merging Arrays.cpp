// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), <int> b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int p = 0, q = 0;
    while (p < n && q < m)
    {
        if (a[p] <= b[q])
            cout << a[p++] << " ";
        else
            cout << b[q++] << " ";
    }
    while (p < n)
        cout << a[p] << " ";
    while (q < m)
        cout << b[q] << " ";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> s;
    while (n--)
    {
        string p;
        int flag = 0;
        cin >> p;
        for (auto x : s)
        {
            if (p == x)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        s.push_back(p);
    }
    return 0;
}
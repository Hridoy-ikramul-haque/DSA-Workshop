#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;    // 4
    cin >> n; // 4
    vector<string> st;
    int p = n;
    while (p--) // n==0
    {
        string s;
        cin >> s;
        st.push_back(s);
    }
    // for (auto x : st)
    // {
    //     cout << x << endl;

    // }
    unordered_set<string> seen;
    vector<string> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        string x = st[i];
        if (!seen.count(x))
        {
            seen.insert(x);
            ans.push_back(x);
        }
    }

    for (auto p : ans)
    {
        cout << p << endl;
    }
    return 0;
}
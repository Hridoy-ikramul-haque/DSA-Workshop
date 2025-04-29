// https://codeforces.com/problemset/problem/368/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> arr(n + 2), count(n + 2);
    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i]; // o(m)
    }

    // for (int i = 0; i < m; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    int t = 1;

    for (int i = n; i >= 1; i--)

    {
        st.insert(arr[i]); // logn
        count[i] = st.size();
    }
    // nologn

    while (m--)
    {
        int val;
        cin >> val;
        cout << count[val] << endl; // o(1)
    }

    return 0;
}

// tc- O(NlogN +m) == O(NlogN)

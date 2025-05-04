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
        int n;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(n - 1));
        set<int> arr;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> v[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (!arr.count(v[i][j]))
                {
                    arr.insert(v[i][j]);
                }
            }
        }

        for (auto x : arr)
        {
            if (x != 0)
                cout << x << " ";
        }
        cout << endl;
        arr.clear();
    }

    return 0;
}

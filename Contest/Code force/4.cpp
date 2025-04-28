#include <bits/stdc++.h>
using namespace std;

bool collections(const vector<int> &a, const vector<int> &b)
{
    int i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] >= b[j])
            j++;
        i++;
    }
    return j == b.size();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int &x : a)
            cin >> x;
        for (int &x : b)
            cin >> x;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (collections(a, b))
        {
            cout << 0 << '\n';
            continue;
        }

        int low = 1, high = 1e9, answer = -1;
        while (low <= high)
        {
            int mid = (low + high) / 2;

            vector<int> new_a = a;
            new_a.push_back(mid);
            sort(new_a.begin(), new_a.end());

            if (collections(new_a, b))
            {
                answer = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        cout << answer << '\n';
    }

    return 0;
}

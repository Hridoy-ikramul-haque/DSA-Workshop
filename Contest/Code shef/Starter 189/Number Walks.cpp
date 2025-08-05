#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<vector<int>> pos(k + 1);
    for (int i = 0; i < n; ++i)
    {
        pos[a[i]].push_back(i);
    }

    vector<vector<int>> left(n, vector<int>(k + 1, -1));
    vector<vector<int>> right(n, vector<int>(k + 1, n));

    for (int x = 1; x <= k; ++x)
    {
        int last = -1;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] == x)
                last = i;
            left[i][x] = last;
        }
        last = n;
        for (int i = n - 1; i >= 0; --i)
        {
            if (a[i] == x)
                last = i;
            right[i][x] = last;
        }
    }

    vector<ll> cost(k + 1, LLONG_MAX);
    vector<int> prev_pos(k + 1, -1);

    for (int i : pos[k])
    {
        cost[i] = 0;
        prev_pos[i] = i;
    }

    for (int x = k - 1; x >= 1; --x)
    {
        for (int i : pos[x])
        {
            ll min_cost = LLONG_MAX;
            int best_next = -1;
            int left_idx = left[i][x + 1];
            int right_idx = right[i][x + 1];
            if (left_idx != -1 && cost[left_idx] != LLONG_MAX)
            {
                ll dist = abs((ll)i - left_idx);
                if (dist + cost[left_idx] < min_cost)
                {
                    min_cost = dist + cost[left_idx];
                    best_next = left_idx;
                }
            }
            if (right_idx != n && cost[right_idx] != LLONG_MAX)
            {
                ll dist = abs((ll)i - right_idx);
                if (dist + cost[right_idx] < min_cost)
                {
                    min_cost = dist + cost[right_idx];
                    best_next = right_idx;
                }
            }
            if (min_cost != LLONG_MAX)
            {
                cost[i] = min_cost;
                prev_pos[i] = best_next;
            }
        }
    }

    vector<ll> ans(n);
    for (int s = 0; s < n; ++s)
    {
        ll total_dist = LLONG_MAX;
        int left_idx = left[s][1];
        int right_idx = right[s][1];
        if (left_idx != -1 && cost[left_idx] != LLONG_MAX)
        {
            total_dist = min(total_dist, abs((ll)s - left_idx) + cost[left_idx]);
        }
        if (right_idx != n && cost[right_idx] != LLONG_MAX)
        {
            total_dist = min(total_dist, abs((ll)s - right_idx) + cost[right_idx]);
        }
        ans[s] = total_dist;
    }

    for (int s = 0; s < n; ++s)
    {
        cout << ans[s];
        if (s < n - 1)
            cout << " ";
    }
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
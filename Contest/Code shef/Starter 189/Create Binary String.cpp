#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    ll a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, -1));
    dp[0][0] = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int z = 0; z <= i; ++z)
        {
            if (dp[i][z] == -1)
                continue;

            ll ones = i - z;
            {
                ll new_zeros = z + 1;
                ll new_ones = ones;
                ll coins = dp[i][z] + a + c * new_ones;
                if (new_zeros <= n)
                {
                    dp[i + 1][new_zeros] = max(dp[i + 1][new_zeros], coins);
                }
            }
            {
                ll new_zeros = z;
                ll new_ones = ones + 1;
                ll coins = dp[i][z] + b + d * new_zeros;
                if (new_ones <= n)
                {
                    dp[i + 1][z] = max(dp[i + 1][z], coins);
                }
            }
        }
    }
    ll ans = 0;
    for (int z = 0; z <= n; ++z)
    {
        if (dp[n][z] != -1)
        {
            ans = max(ans, dp[n][z]);
        }
    }

    cout << ans << '\n';
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
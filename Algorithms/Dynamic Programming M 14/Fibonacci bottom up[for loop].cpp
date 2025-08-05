#include <bits/stdc++.h>
using namespace std;
vector<long long> dp(1005, -1);

int main()
{
    long long n;
    cin >> n;
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n];
    return 0;
}
// O(N)
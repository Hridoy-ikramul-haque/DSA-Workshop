#include <bits/stdc++.h>
long long dp_arr[1005];
using namespace std;
int fibo_dp(long long v)
{
    if (v == 1 || v == 0)
        return v;
    if (dp_arr[v] != -1)
        return dp_arr[v];
    dp_arr[v] = fibo_dp(v - 1) + fibo_dp(v - 2);
    return dp_arr[v];
}
int main()
{
    long long int n;
    cin >> n;
    memset(dp_arr, -1, sizeof(dp_arr));
    long long r = fibo_dp(n);
    cout << r;
    return 0;
}
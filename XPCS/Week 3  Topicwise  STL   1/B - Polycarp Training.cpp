// https://codeforces.com/problemset/problem/1165/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr)
        cin >> x;
    sort(arr.begin(), arr.end());

    int day = 1, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= day)
        {
            day++;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

// 1 1 3 4
// 1 2 2 3
// loop- 1->
// 1 2 3 4 - count -3

// 1 1 1
// 3 2 1 - count 1

// 2 2 1 1 1
// 5 4 3 2 1 - count

// 1 1 3 4

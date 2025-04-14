#include <iostream>
#include <vector>
using namespace std;

long long f(int k, const vector<int> &a, int l, int r)
{
    long long ans = 0;
    for (int i = l; i <= r; i++)
    {
        while (k % a[i] == 0)
        {
            k /= a[i];
        }
        ans += k;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        while (q--)
        {
            int k, l, r;
            cin >> k >> l >> r;
            l--;
            r--;
            cout << f(k, a, l, r) << endl;
        }
    }

    return 0;
}

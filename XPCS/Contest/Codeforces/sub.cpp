#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        sort(a.begin(), a.end()); // sort increasing

        vector<long long> res(n);
        res[0] = a[n - 1]; // biggest element
        for (int i = 1; i < n; ++i)
        {
            res[i] = res[i - 1] + a[n - 1 - i];
        }

        for (int i = 0; i < n; ++i)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
}

// https://codeforces.com/contest/2093/problem/C
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int val)
{
    if (val == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= val; i++)
    {
        if (val % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int val, k;
        cin >> val >> k;
        if (val == 1 && k == 2)
        {
            cout << "YES" << endl;
        }
        else if (k == 1 && isPrime(val))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

// time complexity =0(SQRT(N))
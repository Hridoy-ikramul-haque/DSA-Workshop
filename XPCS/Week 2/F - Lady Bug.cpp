#include <iostream>
#include <string>
using namespace std;

bool isValid(string a, string b, int n)
{
    int start = 0;
    while (start < n)
    {
        int end = start;

        while (end + 1 < n &&
               ((a[end + 1] == a[start] && b[end + 1] == b[start]) ||
                (a[end + 1] == b[start] && b[end + 1] == a[start])))
        {
            end++;
        }

        int countA0 = 0, countB1 = 0;
        for (int i = start; i <= end; ++i)
        {
            if (a[i] == '0')
                countA0++;
            if (b[i] == '1')
                countB1++;
        }

        if (countA0 != (end - start + 1) || countB1 != (end - start + 1))
        {
            return false;
        }

        start = end + 1;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        cout << (isValid(a, b, n) ? "YES" : "NO") << '\n';
    }
    return 0;
}

// 0 0 0 0 0
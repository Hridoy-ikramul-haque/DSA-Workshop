#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x;
        cin >> a >> b >> x;
        if ((a + b) == x || (b + a) == x)
        {
            cout << "+" << endl;
        }
        else
        {
            cout << "-" << endl;
        }
    }

    return 0;
}
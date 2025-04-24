// https://www.codechef.com/problems/CHANGE_PLZ
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        int remains = 100 - x;
        int result = (remains / 10) * 10;
        cout << result << endl;
    }

    return 0;
}
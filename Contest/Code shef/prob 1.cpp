#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int X;
    cin >> X;

    int maxSixers = min(X / 6, 100);
    cout << maxSixers << endl;

    return 0;
}
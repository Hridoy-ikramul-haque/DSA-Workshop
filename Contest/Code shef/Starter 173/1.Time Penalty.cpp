//https://www.codechef.com/problems/WAPEN
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    int result = x + (y * 10);
    cout << result << endl;

    return 0;
}
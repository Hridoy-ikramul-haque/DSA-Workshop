#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<int, string> p1 = {2, "rahim"};
    cout << p1.first << " " << p1.second << endl;

    pair<int, string> p2 = {3, "karim"};
    p1.swap(p2);

    cout << p1.second << " " << p2.second << endl;

    pair<int, pair<bool, string>> p3 = {10, {true, "piukili"}};

    cout << p3.second.first << endl;
    cout << p3.second.second << endl;

    auto [x, rest_2] = p3;
    auto [y, z] = rest_2;
    cout << x << " " << rest_2.first << " " << rest_2.second << endl;
    cout << x << " " << y << " " << z << endl;

    return 0;
}
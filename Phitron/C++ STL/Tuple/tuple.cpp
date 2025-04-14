#include <bits/stdc++.h>
using namespace std;

int main()
{

    tuple<int, string, bool> t = {1, "puikashi", true};
    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;
    get<1>(t) = "Bikhasi";
    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;
    auto [x, y, z] = t;
    cout << x << " " << y << " " << z << endl;
    x = 0;
    y = "Shawashi";
    z = false;
    cout << x << " " << y << " " << z << endl;

    return 0;
}
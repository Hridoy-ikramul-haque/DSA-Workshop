// https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en
#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int count = 0;
    for (int i = 0; i < s2.length(); i++)
    {
        if (s1[i] != s2[i])
        {
            count++;
        }
    }
    cout << count << endl;

    // vector<int> x = {1, 2, 3};
    // for (auto p : x)
    // {
    //     cout << p << endl;
    // }
    return 0;
}
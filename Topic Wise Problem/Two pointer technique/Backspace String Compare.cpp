// https://leetcode.com/problems/backspace-string-compare/description/

#include <bits/stdc++.h>
using namespace std;

bool backSpaceCompare(string s, string t)
{
    stack<char> s1, t1;
    for (auto x : s)
    {
        if (x >= 'a' && x <= 'z')
        {
            s1.push(x);
        }
        else if (x == '#' && !s1.empty())
        {
            s1.pop();
        }
    }
    for (auto x : t)
    {
        if (x >= 'a' && x <= 'z')
        {
            t1.push(x);
        }
        else if (x == '#' & !t1.empty())
        {
            t1.pop();
        }
    }

    // compare
    if (s1.size() != t1.size())
    {
        return false;
    }
    if (s1 != t1)
    {
        return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "ab#c";
    string t = "ad#c";

    cout << (backSpaceCompare(s, t) ? "true" : "false");

    return 0;
}
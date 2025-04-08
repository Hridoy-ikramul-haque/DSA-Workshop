// https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b;
    cin >> a >> b;
    vector<long long int> val(100005);
    for (long long int i = 0; i < a; i++)
    {
        long long int data;
        cin >> data;
        val[i] = data;
    }

    // for (int i = 0; i < a; i++)
    // {
    //     cout << val[i] << endl;
    // }
    vector<long long int> final_data;
    for (long long int i = 0; i < a; i++)
    {
        if (val[i] != b)
        {
            final_data.push_back(val[i]);
        }
    }
    for (auto x : final_data)
    {
        cout << x << endl;
    }

    return 0;
}

// https://docs.google.com/document/d/1GP1k8Au6XTijZ-B-ivgtlPF2G5ERWJzp/edit
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;
    vector<int> v1(10);
    vector<int> v2(10, 2);

    int s = v.size();
    int s1 = v.size();
    int s2 = v.size();

    // cout << s << " " << s1 << " " << s2 << endl; // expect 0

    for (int i = 0; i < 4; i++)
    {
        v.push_back(i + 1);
    }
    int p = 0;
    while (p < 4)
    {
        // cout << v[p] << " ";
        p++;
    }
    // cout << endl;
    // cout << v.size() << endl;

    // find first element
    int f = v.front();
    int o = v.back();
    // cout << f << " " << o << endl;

    auto x = false;
    // cout << x << endl;

    v.resize(3);
    // cout << v.size() << endl;
    v.clear();
    // cout << v.size() << endl;
    // cout << v.empty() << endl;

    // Iterator
    // Iterator basically a pointer , point a specific value.
    // vector iterator-
    // begin(), end() , rbegin(), rend();
    // begin()- first value
    // end()- after the last value
    // rbegin reverse begin -> last value
    // rend - before first value;

    vector<int> l_it = {1, 2, 3, 4, 5, 6};
    for (auto it = l_it.begin(); it != l_it.end(); it++)
    {
        cout << *it << endl;
    }
    auto l_elem = --l_it.end();
    cout << *l_elem << endl;

    // sort
    sort(v.begin(), v.end());                 // assending
    sort(v.rbegin(), v.rend());               // desending
    sort(v.begin(), v.end(), greater<int>()); // desending

    // min and max
    auto min = min_element(v.begin(), v.end());
    auto max = max_element(v.begin(), v.end());
    cout << *min << " " << *max << endl;

    // merge 2 vector
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
    return 0;
}
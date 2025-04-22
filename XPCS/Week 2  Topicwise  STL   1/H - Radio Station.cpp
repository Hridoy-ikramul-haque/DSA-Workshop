#include <bits/stdc++.h>
using namespace std;

/*
    steps:
    common part= server ip , command ip
    1. take unordered_map to store server ip in a way , ip: name
    2. loop through 0 to t_ip and store server ip.
    3. loop through 0 to t_co
    -> extract real ip , remove ; .
    find the name of this ip on  map and print accordingly.

*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t_ip, t_co;
    cin >> t_ip >> t_co;
    map<string, string> allips;
    for (int i = 0; i < t_ip; i++)
    {
        string a, b;
        cin >> a >> b;
        allips[b] = a;
    }

    for (int i = 0; i < t_co; i++)
    {
        string n, semi_ip;
        cin >> n >> semi_ip;
        string real_ip = semi_ip.substr(0, semi_ip.size() - 1);
        string hasing = allips[real_ip];
        cout << n << " " << semi_ip << " " << "#" << hasing << endl;
    }

    // for (auto x : allips)
    // {
    //     cout << allips[x.first] << endl;
    // }

    return 0;
}
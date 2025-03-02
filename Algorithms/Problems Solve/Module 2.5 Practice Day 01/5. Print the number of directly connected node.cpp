#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
vector<bool> vis(1005, false);
vector<int> d_c(1005, 0);
int v, e;
void bfs(int s)
{
    int t;
    cin >> t;
    cout << adj_list[t].size() << endl;
}
int main()
{
    cin >> v >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    bfs(0);
    return 0;
}
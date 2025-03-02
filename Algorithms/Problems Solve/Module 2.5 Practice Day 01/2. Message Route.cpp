#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj_list(100005);
vector<bool> vis(100005, false);
vector<int> parent(100005, -1);
int n, e;
void bfs(int src)
{
    vis[src] = true;
    queue<int> q;
    q.push(src);
    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        for (auto x : adj_list[f])
        {
            if (!vis[x])
            {
                q.push(x);
                parent[x] = f;
                vis[x] = true;
            }
        }
    }
}
int main()
{
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    bfs(1);
    vector<int> path;
    int des = n;
    while (des != -1)
    {
        // path.push_back(parent[des]);
        path.push_back(des);
        des = parent[des];
    }
    reverse(path.begin(), path.end());
    // path.push_back(n);
    if (vis[n])
    {
        cout << path.size() << endl;
    }

    for (auto x : path)
    {
        if (vis[n])
        {
            cout << x << " ";
        }
        else
        {
            cout << "IMPOSSIBLE" << endl;
        }
    }
    return 0;
}

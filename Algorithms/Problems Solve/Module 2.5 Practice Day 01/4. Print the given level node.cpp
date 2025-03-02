#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
vector<bool> vis(1005, false);
vector<int> level(1005, -1);
int v, e;
void levelNodes(int l, int v)
{
    vector<int> nodes;
    for (int i = 0; i < v; i++) // O(V)
    {
        if (level[i] == l)
        {
            nodes.push_back(i);
        }
    }
    sort(nodes.begin(), nodes.end(), greater<int>()); // O(VLOGV)
    for (int x : nodes)
    {
        cout << x << " ";
    }
}
void bfs(int s, int v)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    level[s] = 0;

    while (!q.empty()) // O(V+E)
    {
        int p = q.front();
        q.pop();
        for (int c : adj_list[p])
        {
            if (!vis[c])
            {
                q.push(c);
                vis[c] = true;
                level[c] = level[p] + 1;
            }
        }
    }
    int l;
    cin >> l;
    levelNodes(l, v);
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
    bfs(0, v); // O(V+E+V LOG V);
    return 0;
}